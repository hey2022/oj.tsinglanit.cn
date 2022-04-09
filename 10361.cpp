#include <iostream>

int main() {
    int number;
    bool prime = true;
    std::cin >> number;
    if (number == 0 || number == 1) {
        prime = false;
    } else {
        for (int i = 2; i <= number/2; ++i) {
            if (number % i == 0) {
                prime = false;
                break;
            }
        }
    }
    if (prime) {
        std::cout << "Y" << std::endl;
    } else {
        std::cout << "N" << std::endl;
    }
    return 0;
}
