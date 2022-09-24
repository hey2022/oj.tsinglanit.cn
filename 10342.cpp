#include <iostream>

int main() {
    long long number;
    std::cin >> number;
    while (number > 1) {
        if (number % 2 != 0) {
            std::cout << number << "*3+1=" << number * 3 + 1 << "\n";
            number = number * 3 + 1;
        } else {
            std::cout << number << "/2=" << number / 2 << "\n";
            number /= 2;
        }
    }
    std::cout << "End" << "\n";
    return 0;
}
