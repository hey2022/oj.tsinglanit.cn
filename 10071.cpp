#include <iostream>

int main() {
    int number;
    std::cin >> number;
    while (number != 0) {
        std::cout << number % 10 << " ";
        number /= 10;
    }
    return 0;
}
