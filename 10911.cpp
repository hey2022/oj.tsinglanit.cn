#include <iostream>

long long factorial(long long num);

int main() {
    int num;
    std::cin >> num;
    std::cout << factorial(num);
    return 0;
}

long long factorial(long long num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    return num * factorial(num - 1);
}
