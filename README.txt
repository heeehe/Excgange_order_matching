Project Name: Exchange Order Matching

Description: The Exchange Order Matching project is a C++ implementation of a financial exchange's order matching engine. It processes buy and sell orders, matching them based on price and time priority to facilitate trades between parties.

Key Features:

Order Processing: Handles various order types, including market and limit orders.
Order Book Management: Maintains an order book with efficient insertion, deletion, and matching operations.
Trade Execution: Executes trades when matching conditions are met, updating user balances accordingly.
Sample Code Snippet:

cpp
Copy code
#include <iostream>
#include <string>

int main() {
    std::string orderType;
    double price;
    int quantity;

    std::cout << "Enter order type (buy/sell): ";
    std::cin >> orderType;
    std::cout << "Enter price: ";
    std::cin >> price;
    std::cout << "Enter quantity: ";
    std::cin >> quantity;

    // Process the order
    // ...

    std::cout << "Order processed successfully." << std::endl;
    return 0;
}

Buy Orders: 1, Sell Orders: 0
Trade Executed: 5 units at 99.5
Buy Orders: 1, Sell Orders: 0
Trade Executed: 5 units at 100
Buy Orders: 0, Sell Orders: 1
Trade Executed: 10 units at 100
Buy Orders: 1, Sell Orders: 0

Accessing the Full Code: The complete source code is available on GitHub: https://github.com/heeehe/Excgange_order_matching

