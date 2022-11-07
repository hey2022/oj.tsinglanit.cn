#include <iostream>

int c(int m, int n);

int main() {
    int m;
    int n;
    std::cin >> m >> n;
    std::cout << c(m, n);
    return 0;
}

int c(int m, int n) {
    return n == 1 ? m : m == n ? 1 : c(m - 1, n) + c(m - 1, n - 1);
}
