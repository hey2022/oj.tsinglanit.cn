#include <iostream>

int main() {
    int number1, number2;
    std::cin >> number1 >> number2;
    if (number1 > number2) {
        std::cout << ">" << std::endl;
    } else if (number1 == number2) {
        std::cout << "=" << std::endl;
    } else if (number1 < number2) {
        std::cout << "<" << std::endl;
    }
    return 0;
}