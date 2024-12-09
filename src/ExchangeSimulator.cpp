#include "ExchangeSimulator.h"
#include <iostream>

void ExchangeSimulator::simulate(const std::vector<Order>& orders) {
    for (const auto& order : orders) {
        orderBook.addOrder(order);
        orderBook.matchOrders();
        orderBook.printOrderBook();
    }
}
