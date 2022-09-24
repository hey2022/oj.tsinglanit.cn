#include <iostream>
#include <cmath>

std::string determine(const int number) {
    int value = 0;
    int temp = number;
    if (number >= 100 && number < 1000) {
        for (int i = 0; i < 3; ++i) {
            value += static_cast<int>(pow(temp % 10, 3));
            temp /= 10;
        }
        if (value == number) {
            return "yes";
        }
    }
    return "no";
}

int main() {
    int number;
    std::cin >> number;
    std::cout << determine(number) << "\n";
    return 0;
}
