#include <iostream>

int factorial(int num);

int main() {
    int num;
    std::cin >> num;
    std::cout << factorial(num) << "\n";
    return 0;
}

int factorial(int num) {
    if (num == 1) {
        return 1;
    }
    return num * factorial(num - 1);
}
