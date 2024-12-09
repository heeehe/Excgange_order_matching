#ifndef ORDERBOOK_H
#define ORDERBOOK_H

#include "Order.h"
#include <queue>
#include <vector>

class OrderBook {
private:
    std::priority_queue<Order> buyOrders;
    std::priority_queue<Order, std::vector<Order>, std::greater<>> sellOrders;

public:
    void addOrder(const Order& order);
    void matchOrders();
    void printOrderBook() const;
};

#endif
