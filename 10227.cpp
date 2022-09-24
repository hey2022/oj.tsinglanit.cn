#include <iostream>

int main() {
    int number;
    std::cin >> number;
    if (number % 3 == 0) {
        std::cout << 3 << " ";
    }
    if (number % 5 == 0) {
        std::cout << 5 << " ";
    }
    if (number % 7 == 0) {
        std::cout << 7 << " ";
    }
    if (number % 3 != 0 && number % 5 != 0 && number % 7 != 0) {
        std::cout << "无" << "\n";
    }
    return 0;
}
