#include "../src/OrderBook.h"
#include <cassert>
#include <iostream>


void testOrderMatching() {
    OrderBook orderBook;

    orderBook.addOrder(Order(1, BUY, 100.0, 10));
    orderBook.addOrder(Order(2, SELL, 99.0, 5));
    orderBook.matchOrders();

    // Add assertions for expected results
}

int main() {
    testOrderMatching();
    std::cout << "All tests passed!\n";
    return 0;
}
