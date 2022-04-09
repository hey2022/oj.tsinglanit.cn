#include <iostream>

int main() {
    int number, sum = 0;
    std::cin >> number;
    for (int i = 0; i <= number; i++) {
        sum += i * (i + 1) / 2;
    }
    std::cout << sum << std::endl;
    return 0;
}
