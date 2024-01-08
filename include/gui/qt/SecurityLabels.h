#pragma once

#include <QLabel>

class SecurityLabels {
public:
    QLabel* priceLabel;
    QLabel* bestBidLabel;
    QLabel* bestAskLabel;
    SecurityLabels(QLabel* price, QLabel* bid, QLabel* ask): priceLabel(price), bestBidLabel(bid), bestAskLabel(ask) {}
};