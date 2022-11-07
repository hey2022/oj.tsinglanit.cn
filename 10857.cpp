#include <iostream>

int ackmann(int m, int n);

int main() {
    int m;
    int n;
    std::cin >> m >> n;
    std::cout << ackmann(m, n);
    return 0;
}

int ackmann(int m, int n) {
    return m == 0 ? n + 1 : m > 0 && n == 0 ? ackmann(m - 1, 1) : ackmann(m-1,ackmann(m,n-1));
}
