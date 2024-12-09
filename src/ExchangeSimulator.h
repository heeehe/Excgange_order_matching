#ifndef EXCHANGESIMULATOR_H
#define EXCHANGESIMULATOR_H

#include "OrderBook.h"
#include <vector>

class ExchangeSimulator {
private:
    OrderBook orderBook;

public:
    void simulate(const std::vector<Order>& orders);
};

#endif
