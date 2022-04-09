#include <iostream>

int main() {
    int number, factorial, sum = 0;
    std::cin >> number;
    for (int i = 1; i <= number; ++i) {
        factorial = 1;
        for (int j = 1; j <= i; ++j) {
            factorial *= j;
        }
        sum += factorial;
    }
    std::cout << sum << std::endl;
    return 0;
}
