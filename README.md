This project is a real-time read-only trading platform using C++17.

The goal is a Low-Latency skills demonstration using WebSockets and multi-threading.

NOTE: The UIX is not my concern, so I'll start using QtFramework for a simple demonstration.

*** UNDER CONSTRUCTION (started in 2024, January 6th) ***

Features
--------

- Cross-platform (Windows, Linux, MacOS)
- Can be easily modified to connect on a different API (I'm starting with Yahoo Finance)
- Can be easily modified to use a different GUI Framework
- The concurrency model can be easily modified (I'll start with std::thread)
- Be highly scalable, maintainable, etc, using several design patterns
- I'm starting with a basic 'struct Security', I'll be adding more attributes support soon
- I'll start only with a grid for the securities but later I'll expand to add book orders and other widgets

Personal notes
--------------
- Install Qt6: apt-get installqt6-base-dev
- For debug in VSCode: rm -fr build/* ; cd build ; cmake -DCMAKE_BUILD_TYPE=Debug .. ; make
- To run in VSCode terminal: cd build ; unset GTK_PATH ; make ; ./patobroker