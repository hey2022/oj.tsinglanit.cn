#include <iostream>

int main() {
    int rows;
    std::cin >> rows;
    for (int i = 1; i <= rows; ++i) {
        for (int j = rows; j > i; --j) {
            std::cout << " ";
        }
        for (int k = 0; k < i * 2 - 1; ++k) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}
