#include <iostream>

int main() {
    int x = 2, x_1 = 1, x_2, fibonacci;
    std::cin >> fibonacci;
    for (int i = 0; i < fibonacci; i++) {
        x_2 = x_1;
        x_1 = x;
        x = x_1 + x_2;
        std::cout << x_2 << "/" << x_1 << " ";
    }
    return 0;
}
