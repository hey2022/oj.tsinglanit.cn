#include <iostream>

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 20 == 0 && i != 100) {
            std::cout << i << std::endl;
        } else if (i % 2 == 0) {
            std::cout << i << " ";
        }
    }
    return 0;
}
