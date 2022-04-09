#include <iostream>

int main() {
    int number;
    std::cin >> number;
    while (number != 0) {
        std::cout << number % 10 << std::endl;
        number /= 10;
    }
    return 0;
}
