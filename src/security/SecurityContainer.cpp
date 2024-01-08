#include "SecurityContainer.h"

void SecurityContainer::addSecurity(Security security) {
    std::unique_lock<std::shared_mutex> lock(mutex);
    if (tickerMap.find(security.ticker) == tickerMap.end()) {
        securities.push_back(security);
        tickerMap[security.ticker] = securities.size() - 1;
    }
}

Security* SecurityContainer::getSecurity(const std::string ticker) {
    std::shared_lock<std::shared_mutex> lock(mutex);
    if (auto it = tickerMap.find(ticker); it != tickerMap.end()) {
        return &securities[it->second];
    }
    return nullptr;
}