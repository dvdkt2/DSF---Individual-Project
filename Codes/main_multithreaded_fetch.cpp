#include <thread>
#include <vector>
#include <string>
#include <iostream>
#include "fetch_crypto_data.h"
#include "fetch_stock_data.h"

int main() {
    std::vector<std::string> crypto_coins = {"bitcoin", "ethereum", "solana"};
    std::vector<std::string> stock_symbols = {"AAPL", "GOOGL", "MSFT"};

    std::vector<std::thread> threads;

    // Crypto threads
    for (const auto& coin : crypto_coins) {
        threads.emplace_back([coin]() {
            fetch_crypto_data(coin, 30);
        });
    }

    // Stock threads
    for (const auto& symbol : stock_symbols) {
        threads.emplace_back([symbol]() {
            fetch_and_process_stock_data(symbol);
        });
    }

    // Join all threads
    for (auto& t : threads) {
        t.join();
    }

    std::cout << "All data fetched.\n";
    return 0;
}
