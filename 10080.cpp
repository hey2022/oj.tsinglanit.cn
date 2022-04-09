#include <iostream>
#include <iomanip>

int main() {
    float book_prices[10] = {28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65}, price = 0;
    int amount;
    for (int i = 0; i < 10; ++i) {
        std::cin >> amount;
        price += amount * book_prices[i];
    }
    std::cout << std::fixed << std::setprecision(1) << price << std::endl;
    return 0;
}
