#ifndef ORDERBOOK_H
#define ORDERBOOK_H

#include "Order.h"
#include <queue>
#include <vector>

class OrderBook {
private:
    std::priority_queue<Order> buyOrders; // Defaults to max-heap for BUY orders
    std::priority_queue<Order, std::vector<Order>, std::greater<>> sellOrders; // Min-heap for SELL orders

public:
    void addOrder(const Order& order);
    void matchOrders();
    void printOrderBook() const;
};

#endif

