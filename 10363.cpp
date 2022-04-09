#include <iostream>

int main() {
    int number, prime;
    std::cin >> number;
    for (int i = 2; i <= number/2; i++) {
        if (number % i == 0) {
            prime = i;
        }
    }
    std::cout << prime << std::endl;
    return 0;
}
