#include <iostream>

int main() {
    int a, b, c, x, y = 0, count = 0;
    std::cin >> a >> b >> c;
    for (x = 0; a * x + b * y <= c; ++x) {
        for (;a * x + b * y <= c; ++y) {
            if (a * x + b * y == c) {
                ++count;
            }
        }
        y = 0;
    }
    std::cout << count << std::endl;
    return 0;
}
