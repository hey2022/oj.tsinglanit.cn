#include <iostream>
#include <string>
#include <cmath>

std::string digit_sum(std::string string, int digit) {
    std::string string_number;
    for (int i = 0; i < string.length() - digit; ++i) {
        for (int j = i; j < digit; ++j) {
            string_number += string[j];
        }

    }
    return sum;
}

int main() {
    std::string string;
    int digit;
    for (int i = 0; i < 5; ++i) {
        std::cin >> string >> digit;
        std::cout << digit_sum(string, digit) << std::endl;
    }
    return 0;
}