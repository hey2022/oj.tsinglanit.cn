#include <iostream>

int main() {
    int number;
    std::cin >> number;
    if (number > 0) {
        std::cout << "positive" << std::endl;
    } else if (number < 0) {
        std::cout << "negative" << std::endl;
    } else if (number == 0)
        std::cout << "zero" << std::endl;
    return 0;
}