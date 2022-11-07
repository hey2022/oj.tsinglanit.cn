#include <iostream>

bool isPrime(int n, int factor = 2);

int main() {
    int n;
    std::cin >> n;
    isPrime(n) == 1 ? std::cout << "The number is prime" : std::cout << "The number is not prime";
    return 0;
}

bool isPrime(int number, int factor) {
    if (number == 0 || number == 1 || number % factor == 0 && number != 2) {
        return false;
    } else if (factor >= number / 2) {
        return true;
    } else {
        return isPrime(number, factor + 1);
    }
}
