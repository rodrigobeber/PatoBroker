#include "TradingSystem.h"

TradingSystem::TradingSystem(GUIFramework* pGui, APIProvider* pApi): gui(pGui), api(pApi), isRunning(false) {}

int TradingSystem::run() {
    return gui->show();
}

void TradingSystem::stop() {
    // Implement the stop logic here
}

void TradingSystem::addSecurityToGrid(Security security) {
    gui->addSecurityToGrid(security);
}

void TradingSystem::updateSecurity(const std::string& ticker, double newPrice) {
    Security* security = securityContainer.getSecurity(ticker);
    security->price = newPrice;
}