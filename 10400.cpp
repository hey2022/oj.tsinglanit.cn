#include <iostream>

int main() {
    int height, apples[10], reached = 0;
    for (int i = 0; i < 10; ++i) {
        std::cin >> apples[i];
    }
    std::cin >> height;
    height += 30;
    for (int i = 0; i < 10; ++i) {
        if (height >= apples[i]) {
            reached++;
        }
    }
    std::cout << reached << std::endl;
    return 0;
}
