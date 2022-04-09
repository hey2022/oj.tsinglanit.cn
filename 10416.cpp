#include <iostream>

int main() {
    int number, tens, ones;
    std::cin >> number;
    ones = number % 10;
    tens = number / 10 % 10;
    std::cout << ones * 10 + tens << std::endl;
    return 0;
}
