/**
 * @file      network.cpp
 * @author    Lewis He (lewishe@outlook.com)
 * @license   MIT
 * @copyright Copyright (c) 2022  Shenzhen Xin Yuan Electronic Technology Co., Ltd
 * @date      2022-09-16
 *
 */
#include <WiFi.h>
#include <WiFiMulti.h>
#include <esp_mac.h>
#if __has_include("secrets.h")
#include "secrets.h"
#else
#define WIFI_SSID1 ""
#define WIFI_SSID_PASSWORD1 ""
#endif

WiFiMulti wifiMulti;

String hostName = "LilyGo-Cam-";
String ipAddress = "";
bool isAP = false;
bool networkReady = false;

void WiFiEvent(WiFiEvent_t event)
{
    Serial.printf("[WiFi-event] event: %d\n", event);
    switch (event) {
    case ARDUINO_EVENT_WIFI_READY:
        Serial.println("WiFi interface ready");
        break;
    case ARDUINO_EVENT_WIFI_SCAN_DONE:
        Serial.println("Completed scan for access points");
        break;
    case ARDUINO_EVENT_WIFI_STA_START:
        Serial.println("WiFi client started");
        break;
    case ARDUINO_EVENT_WIFI_STA_STOP:
        Serial.println("WiFi clients stopped");
        break;
    case ARDUINO_EVENT_WIFI_STA_CONNECTED:
        Serial.println("Connected to access point");
        break;
    case ARDUINO_EVENT_WIFI_STA_DISCONNECTED:
        Serial.println("Disconnected from WiFi access point");
        break;
    case ARDUINO_EVENT_WIFI_STA_AUTHMODE_CHANGE:
        Serial.println("Authentication mode of access point has changed");
        break;
    case ARDUINO_EVENT_WIFI_STA_GOT_IP:
        Serial.print("Obtained IP address: ");
        Serial.println(WiFi.localIP());
        networkReady = true;
        break;
    case ARDUINO_EVENT_WIFI_STA_LOST_IP:
        Serial.println("Lost IP address and IP address is reset to 0");
        break;
    case ARDUINO_EVENT_WPS_ER_SUCCESS:
        Serial.println("WiFi Protected Setup (WPS): succeeded in enrollee mode");
        break;
    case ARDUINO_EVENT_WPS_ER_FAILED:
        Serial.println("WiFi Protected Setup (WPS): failed in enrollee mode");
        break;
    case ARDUINO_EVENT_WPS_ER_TIMEOUT:
        Serial.println("WiFi Protected Setup (WPS): timeout in enrollee mode");
        break;
    case ARDUINO_EVENT_WPS_ER_PIN:
        Serial.println("WiFi Protected Setup (WPS): pin code in enrollee mode");
        break;
    case ARDUINO_EVENT_WIFI_AP_START:
        Serial.println("WiFi access point started");
        networkReady = true;
        break;
    case ARDUINO_EVENT_WIFI_AP_STOP:
        Serial.println("WiFi access point  stopped");
        networkReady = false;
        break;
    case ARDUINO_EVENT_WIFI_AP_STACONNECTED:
        Serial.println("Client connected");
        break;
    case ARDUINO_EVENT_WIFI_AP_STADISCONNECTED:
        Serial.println("Client disconnected");
        break;
    case ARDUINO_EVENT_WIFI_AP_STAIPASSIGNED:
        Serial.println("Assigned IP address to client");
        break;
    case ARDUINO_EVENT_WIFI_AP_PROBEREQRECVED:
        Serial.println("Received probe request");
        break;
    default: break;
    }
}


void setupNetwork(bool setup_AP_Mode)
{
    isAP = setup_AP_Mode;

    WiFi.onEvent(WiFiEvent);

    if (setup_AP_Mode) {
        uint8_t apMac[6];
        const esp_err_t macResult = esp_read_mac(apMac, ESP_MAC_WIFI_SOFTAP);
        if (macResult != ESP_OK) {
            Serial.printf("Failed to read WiFi AP MAC address: %s\n",
                          esp_err_to_name(macResult));
            return;
        }

        char macSuffix[5];
        snprintf(macSuffix, sizeof(macSuffix), "%02X%02X", apMac[4], apMac[5]);
        hostName = String("LilyGo-Cam-") + macSuffix;

        if (!WiFi.mode(WIFI_AP)) {
            Serial.println("Failed to enable WiFi AP mode");
            return;
        }

        if (!WiFi.softAP(hostName.c_str())) {
            Serial.println("Failed to start WiFi access point");
            return;
        }

        ipAddress = WiFi.softAPIP().toString();
        Serial.printf("Started AP mode host name: %s\n", hostName.c_str());
        Serial.printf("AP MAC address: %02X:%02X:%02X:%02X:%02X:%02X\n",
                      apMac[0], apMac[1], apMac[2],
                      apMac[3], apMac[4], apMac[5]);
        Serial.printf("IP address: %s\n", ipAddress.c_str());

    } else {
        if (WIFI_SSID1[0] == '\0') {
            Serial.println("Station mode requires examples/factory/secrets.h");
            return;
        }
        wifiMulti.addAP(WIFI_SSID1, WIFI_SSID_PASSWORD1);
        //wifiMulti.addAP(WIFI_SSID2, WIFI_SSID_PASSWORD1);
        //wifiMulti.addAP(WIFI_SSID3, WIFI_SSID_PASSWORD1);
        
        // Start connecting to the Wifi, otherwise the server won't start
        Serial.println("Connecting Wifi...");
        while (WiFi.status() != WL_CONNECTED) {
            wifiMulti.run();
        }

        Serial.println("");
        Serial.println("WiFi connected");
        Serial.println("IP address: ");
        Serial.println(WiFi.localIP());
    }
}

void loopNetwork()
{
    if (!isAP) {
        wifiMulti.run();
    }
}


String getIpAddress()
{
    if (!networkReady) {
        return "";
    }
    if (isAP) {
        return WiFi.softAPIP().toString();
    } else {
        return WiFi.localIP().toString();
    }
}
