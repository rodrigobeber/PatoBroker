#pragma once

#include <string>
#include "GUIFramework.h"
#include "QtFramework.h"
#include "APIProvider.h"
#include "SecurityContainer.h"

class TradingSystem {
private:
    GUIFramework* gui;
    APIProvider* api;
    SecurityContainer securityContainer;
    bool isRunning;

public:
    TradingSystem(GUIFramework* gui, APIProvider* api);

    int run();
    void stop();
    void addSecurityToGrid(Security security);
    void updateSecurity(const std::string& ticker, double newPrice);

    // Add more methods as needed for trading logic
};