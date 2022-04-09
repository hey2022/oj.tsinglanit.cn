#include <iostream>

int main() {
    int a, b, c, max, min;
    std::cin >> a >> b >> c;
    if (a > b) {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }
    if (max < c) {
        max = c;
    }
    if (min > c) {
        min = c;
    }
    std::cout << min << " "  << a + b + c - max - min << " " << max << std::endl;
    return 0;
}