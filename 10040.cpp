#include <iostream>

int main() {
    int number;
    std::cin >> number;
    if (number >= 10 && number < 100) {
        std::cout << 1 << std::endl;
    } else {
        std::cout << 0 << std::endl;
    }
    return 0;
}
