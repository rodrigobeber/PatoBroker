#include "GUIFramework.h"
#include "QtFramework.h"
#include "TradingSystem.h"
#include "YahooFinanceAPI.h"

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    QtFramework gui("Patobroker");
    YahooFinanceAPI api;

    TradingSystem ts(&gui, &api);
    ts.addSecurityToGrid(Security("AAPL", "Apple Inc.", 150.0, 149.5, 150.5));
    ts.addSecurityToGrid(Security("GOOGL", "Alphabet Inc.", 2700.0, 2695.5, 2705.5));
    ts.addSecurityToGrid(Security("MSFT", "Microsoft Corp.", 300.0, 299.5, 300.5));
    ts.addSecurityToGrid(Security("AMZN", "Amazon.com Inc.", 3500.0, 3499.5, 3500.5));
    ts.addSecurityToGrid(Security("TSLA", "Tesla Inc.", 750.0, 749.5, 750.5));
    ts.addSecurityToGrid(Security("FB", "Meta Platforms Inc.", 350.0, 349.5, 350.5));
    ts.addSecurityToGrid(Security("AAPL", "Apple Inc.", 150.0, 149.5, 150.5));
    ts.addSecurityToGrid(Security("GOOGL", "Alphabet Inc.", 2700.0, 2695.5, 2705.5));
    ts.addSecurityToGrid(Security("NVDA", "NVIDIA Corporation", 400.0, 399.5, 400.5));
    ts.addSecurityToGrid(Security("NFLX", "Netflix Inc.", 500.0, 499.5, 500.5));
    ts.run();

    return app.exec();

}