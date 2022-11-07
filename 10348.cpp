#include <iostream>

int main() {
    for (int i = 1; i <= 100; ++i) {
        std::cout << i << " ";
        if (i % 10 == 0) {
            std::cout << "\n";
        }
    }
    return 0;
}
