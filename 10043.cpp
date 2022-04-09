#include <iostream>

int main() {
    int language, math;
    std::cin >> language >> math;
    if (language < 60 xor math < 60) {
        std::cout << 1 << std::endl;
    } else {
        std::cout << 0 << std::endl;
    }
    return 0;
}