#include "OrderBook.h"
#include <iostream>

void OrderBook::addOrder(const Order& order) {
    if (order.type == BUY) {
        buyOrders.push(order);
    } else {
        sellOrders.push(order);
    }
}

void OrderBook::matchOrders() {
    while (!buyOrders.empty() && !sellOrders.empty()) {
        Order buyOrder = buyOrders.top();
        Order sellOrder = sellOrders.top();

        if (buyOrder.price >= sellOrder.price) {
            int tradeQuantity = std::min(buyOrder.quantity, sellOrder.quantity);
            buyOrders.pop();
            sellOrders.pop();

            if (buyOrder.quantity > tradeQuantity) {
                buyOrder.quantity -= tradeQuantity;
                buyOrders.push(buyOrder);
            }
            if (sellOrder.quantity > tradeQuantity) {
                sellOrder.quantity -= tradeQuantity;
                sellOrders.push(sellOrder);
            }

            std::cout << "Trade Executed: " << tradeQuantity << " units at " << sellOrder.price << "\n";
        } else {
            break;
        }
    }
}

void OrderBook::printOrderBook() const {
    std::cout << "Buy Orders: " << buyOrders.size() << ", Sell Orders: " << sellOrders.size() << "\n";
}
