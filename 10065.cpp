#include <iostream>

int fibonacci(int number) {
    if (number <= 2) {
        return 1;
    } else {
        return fibonacci(number - 1) + fibonacci(number - 2);
    }
}

int main() {
    int index;
    std::cin >> index;
    std::cout << fibonacci(index) << std::endl;
    return 0;
}
