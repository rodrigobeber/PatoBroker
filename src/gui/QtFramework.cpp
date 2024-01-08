#include <iostream>
#include <QLabel>
#include <QApplication>
#include "qt/QtFramework.h"

QtFramework::QtFramework(std::string title) {
    mainWindow.setWindowTitle(QString::fromStdString(title));
}

QtFramework::~QtFramework() {}

QLabel* QtFramework::createLabel(const QString &text) {
    QLabel *label = new QLabel(text);
    label->setAlignment(Qt::AlignCenter);
    label->setMinimumHeight(30);
    label->setMinimumWidth(100);
    label->setStyleSheet("border: 1px solid black");
    return label;
}

void QtFramework::addSecurityToGrid(Security security) {
    // Create all labels
    QLabel* tickerLabel = createLabel(QString::fromStdString(security.ticker));
    QLabel* priceLabel = createLabel(QString::number(security.price));
    QLabel* bestBidLabel = createLabel(QString::number(security.bestBid));
    QLabel* bestAskLabel = createLabel(QString::number(security.bestAsk));

    // Add QLabel widgets to the grid layout
    int row = grid.rowCount();
    grid.addWidget(tickerLabel, row, 0);
    grid.addWidget(priceLabel, row, 1);
    grid.addWidget(bestBidLabel, row, 2);
    grid.addWidget(bestAskLabel, row, 3);
    grid.setSpacing(0);

    // Set tooltop for the ticker
    tickerLabel->setToolTip(QString::fromStdString(security.name));

    // Create map entry for the ticker
    labelMap.emplace(security.ticker, SecurityLabels(priceLabel, bestBidLabel, bestAskLabel));
}

void QtFramework::updateSecurityPrice(const std::string& ticker, double newPrice) {
    auto it = labelMap.find(ticker);
    if (it != labelMap.end()) {
        SecurityLabels& labels = it->second;
        labels.priceLabel->setText(QString::number(newPrice));
    }
}

int QtFramework::show() {
    mainWindow.setLayout(&grid);
    mainWindow.show();
    return 0;
}