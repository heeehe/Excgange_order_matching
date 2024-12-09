#include "ExchangeSimulator.h"
#include <iostream>

int main() {
    ExchangeSimulator simulator;

    std::vector<Order> orders = {
        Order(1, BUY, 100.5, 10),
        Order(2, SELL, 99.5, 5),
        Order(3, SELL, 100.0, 15),
        Order(4, BUY, 101.0, 20)
    };

    simulator.simulate(orders);

    return 0;
}
