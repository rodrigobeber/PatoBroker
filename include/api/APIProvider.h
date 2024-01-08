#pragma once

#include <vector>
#include <string>

class APIProvider {
public:
    virtual bool connect() = 0;
    virtual bool subscribe(const std::vector<std::string>& tickers) = 0;
    virtual void disconnect() = 0;
    virtual ~APIProvider() = default;
};
