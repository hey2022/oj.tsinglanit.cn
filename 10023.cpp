#include <iostream>

int main() {
    int number;
    std::cin >> number;
    int hundreds = number / 100;
    int tens = number / 10 % 10;
    int ones = number % 10;
    std::cout << ones << tens << hundreds << "\n";
    return 0;
}
