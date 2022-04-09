#include <iostream>

int main() {
    int x = 1, x_1 = 0, x_2 , e = 0, f = 0;
    for (int i = 0; i < 40; i++) {
        x_2 = x_1;
        x_1 = x;
        x = x_1 + x_2;
        std::cout << x_2 << " ";
        e++;
        if (e == 10 && f != 3) {
            std::cout << std::endl;
            e = 0;
            f += 1;
        }
    }
    return 0;
}
