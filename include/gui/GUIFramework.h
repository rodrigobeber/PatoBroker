#pragma once

#include <string>
#include "Security.h"

class GUIFramework {
public:
    virtual void addSecurityToGrid(Security security) = 0;
    virtual void updateSecurityPrice(const std::string& ticker, double newPrice) = 0;
    virtual int show() = 0;
    virtual ~GUIFramework() = default;
};
