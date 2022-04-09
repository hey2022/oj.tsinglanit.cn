#include <iostream>

int main() {
    long long n;
    std::cin >> n;
    std::cout << n * (n - 1) * (n - 2) * (n - 3) / 24<< std::endl;
    return 0;
}