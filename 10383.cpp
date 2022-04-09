#include <iostream>

int main() {
    int rows;
    std::cin >> rows;
    for (int i = 1; i <= rows; ++i) {
        for (int j = 0; j < i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}
