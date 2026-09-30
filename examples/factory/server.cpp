/**
 * @file      server.cpp
 * @author    Lewis He (lewishe@outlook.com)
 * @license   MIT
 * @copyright Copyright (c) 2022  Shenzhen Xin Yuan Electronic Technology Co., Ltd
 * @date      2022-09-16
 *
 */

#include <WiFi.h>
#include <WebServer.h>
#include <esp_camera.h>

#include "server.h"

WebServer server(80);

bool startedServer = false;
static volatile uint16_t streamFpsX10 = 0;

void handle_jpg_stream(void)
{
    WiFiClient client = server.client();
    String response = "HTTP/1.1 200 OK\r\n";
    response += "Content-Type: multipart/x-mixed-replace; boundary=frame\r\n\r\n";
    server.sendContent(response);
    camera_fb_t *fb = nullptr;
    uint32_t fpsWindowStart = millis();
    uint16_t framesSent = 0;
    streamFpsX10 = 0;

    while (client.connected()) {

        // Serial.printf("%s :[%u] %u\n", __func__, millis(), esp_get_free_heap_size());
        yield();

        fb = esp_camera_fb_get();
        if (!fb) {
            Serial.println("fb empty");
            continue;
        }
        response = "--frame\r\n";
        response += "Content-Type: image/jpeg\r\n\r\n";
        server.sendContent(response);

        const size_t frameLength = fb->len;
        const size_t bytesSent = client.write(fb->buf, frameLength);
        server.sendContent("\r\n");
        esp_camera_fb_return(fb);
        fb = nullptr;

        if (bytesSent == frameLength) {
            ++framesSent;
        }

        const uint32_t now = millis();
        const uint32_t elapsed = now - fpsWindowStart;
        if (elapsed >= 1000) {
            streamFpsX10 = static_cast<uint32_t>(framesSent) * 10000 / elapsed;
            framesSent = 0;
            fpsWindowStart = now;
        }

        if (!client.connected()) {
            Serial.println("client disconnected!");
            break;
        }
    }
    if (fb) {
        esp_camera_fb_return(fb);
    }
    streamFpsX10 = 0;
}

uint16_t getStreamFpsX10()
{
    return streamFpsX10;
}

void handleNotFound()
{
    String message = "Server is running!\n\n";
    message += "URI: ";
    message += server.uri();
    message += "\nMethod: ";
    message += (server.method() == HTTP_GET) ? "GET" : "POST";
    message += "\nArguments: ";
    message += server.args();
    message += "\n";
    server.send(200, "text/plain", message);
}


void setupServer()
{
    server.on("/", HTTP_GET, handle_jpg_stream);
    server.onNotFound(handleNotFound);
    server.begin();
    startedServer = true;

}

void loopServer()
{
    if (startedServer) {
        server.handleClient();
    }
}
