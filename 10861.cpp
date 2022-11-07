#include <iostream>

int combinations(int stairs, int a = 0, int b = 1, int c = 1);

int main() {
    int stairs;
    std::cin >> stairs;
    std::cout << combinations(stairs + 1);
    return 0;
}

int combinations(int stairs, int a, int b, int c) {
    return stairs == 0 ? a : stairs == 1 ? b : combinations(stairs - 1, b, c, a + b + c);
}
