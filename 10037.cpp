#include <iostream>

int main() {
    int number;
    std::cin >> number;
    if (number % 2 == 0) {
        std::cout << "even" << std::endl;
    } else if (number % 2 == 1) {
        std::cout << "odd" << std::endl;
    }
    return 0;
}