#pragma once

#include <string>

struct Security {
    std::string ticker;
    std::string name;
    double price;
    double bestBid;
    double bestAsk;
    Security(const std::string pTicker, const std::string pName, double pPrice, double pBid, double pAsk)
    : ticker(pTicker), name(pName), price(pPrice), bestBid(pBid), bestAsk(pAsk) {}
};