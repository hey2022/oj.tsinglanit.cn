#include <iostream>

int main() {
    int number;
    std::cin >> number;
    if (number % 6 == 0) {
        std::cout << "YES" << std::endl;
    } else if (number % 6 != 0){
        std::cout << "NO" << std::endl;
    }
    return 0;
}
