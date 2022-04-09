#include <iostream>

int main() {
    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= i; ++j) {
            if (i != j) {
                std::cout << j << "x" << i << "=" << j * i << " ";
            } else {
                std::cout << j << "x" << i << "=" << j * i << std::endl;
            }
        }
    }
    return 0;
}
