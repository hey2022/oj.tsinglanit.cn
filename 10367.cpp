#include <iostream>
#include <cmath>

int main() {
    int h, t, o;
    for (int i = 100; i < 1000; i++) {
        o = i % 10;
        t = i / 10 % 10;
        h = i / 100 % 10;
        if (pow(h, 3) + pow(t, 3) + pow(o, 3) == i) {
            std::cout << i << " ";
        }
    }
    return 0;
}
