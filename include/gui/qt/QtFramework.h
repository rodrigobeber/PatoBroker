#pragma once

#include <QApplication>
#include <QScreen>
#include <QMainWindow>
#include <QGridLayout>
#include <QWidget>
#include "GUIFramework.h"
#include "SecurityLabels.h"

class QtFramework : public GUIFramework {
private:
    QWidget mainWindow;
    QGridLayout grid;
    std::unordered_map<std::string, SecurityLabels> labelMap;
    QLabel* createLabel(const QString &text);
public:
    QtFramework(std::string title);
    ~QtFramework();

    void addSecurityToGrid(Security security) override;
    void updateSecurityPrice(const std::string& ticker, double newPrice) override;
    int show() override;
};