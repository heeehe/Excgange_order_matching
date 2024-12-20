#include "Order.h"

Order::Order(int id, OrderType t, double p, int q)
    : orderID(id), type(t), price(p), quantity(q) {
    timestamp = std::chrono::system_clock::now().time_since_epoch().count();
}

bool Order::operator<(const Order& other) const {
    if (type == OrderType::BUY) {
        return price < other.price || (price == other.price && timestamp > other.timestamp);
    } else { // SELL orders
        return price > other.price || (price == other.price && timestamp > other.timestamp);
    }
}

bool Order::operator>(const Order& other) const {
    return other < *this;
}


