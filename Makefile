CXX = g++
CXXFLAGS = -Wall -std=c++17

all: simulator

simulator: src/main.cpp src/Order.cpp src/OrderBook.cpp src/ExchangeSimulator.cpp
	$(CXX) $(CXXFLAGS) -o simulator src/main.cpp src/Order.cpp src/OrderBook.cpp src/ExchangeSimulator.cpp

clean:
	rm -f simulator
