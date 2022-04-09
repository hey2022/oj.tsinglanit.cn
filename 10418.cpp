#include <iostream>

int main() {
    int number;
    std::cin >> number;
    if (number % 3 == 0 && number % 5 == 0) {
        std::cout << "欧耶欧耶" << std::endl;
    }
    return 0;
}
