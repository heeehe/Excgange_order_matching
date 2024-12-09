#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <chrono>

enum OrderType { BUY, SELL };

class Order {
public:
    int orderID;
    OrderType type;
    double price;
    int quantity;
    long long timestamp;

    Order(int id, OrderType t, double p, int q);

    // Comparison operator for priority queue
    bool operator<(const Order& other) const;
    bool operator>(const Order& other) const;
};

#endif

