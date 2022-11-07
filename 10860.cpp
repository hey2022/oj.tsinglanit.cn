#include <iostream>

int pell(int n, int a = 1, int b = 2);

int main() {
    int inSize;
    int n;
    std::cin >> inSize;
    for (int i = 0; i < inSize; ++i) {
        std::cin >> n;
        std::cout << pell(n) << "\n";
    }
    return 0;
}

int pell(int n, int a, int b) {
    return n == 1 ? a : n == 2 ? b : pell(n - 1, b, (2 * b + a) % 32767);
}
