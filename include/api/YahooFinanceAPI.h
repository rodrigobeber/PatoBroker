#pragma once

#include <vector>
#include <string>
#include "APIProvider.h"

// Define any necessary data structures or helper classes for the API here

class YahooFinanceAPI : public APIProvider {
public:
    YahooFinanceAPI();
    ~YahooFinanceAPI();

    bool connect() override;
    bool subscribe(const std::vector<std::string>& tickers) override;
    void disconnect() override;

    // Implement any additional methods required for interacting with the API
};
