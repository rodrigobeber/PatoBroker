#pragma once

#include <vector>
#include <unordered_map>
#include <shared_mutex>
#include <mutex>
#include "Security.h"

class SecurityContainer {
private:
    std::vector<Security> securities;
    std::unordered_map<std::string_view, size_t> tickerMap;
    mutable std::shared_mutex mutex;
public:
    void addSecurity(Security security);
    Security* getSecurity(const std::string ticker);
};
