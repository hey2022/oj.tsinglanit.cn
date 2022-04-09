#include <iostream>
#include <cmath>

int main() {
    for (int i = 0; i < 10000; ++i) {
        if (sqrt(i + 100) == int(sqrt(i + 100)) && sqrt(i + 268) == int(sqrt(i + 268))) {
            std::cout << i << std::endl;
        }
    }
    return 0;
}
