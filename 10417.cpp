#include <iostream>

int main() {
    int skips;
    std::cin >> skips;
    if (skips >= 200) {
        std::cout << "跳绳达人" << std::endl;
    } else {
        std::cout << "继续努力" << std::endl;
    }
    return 0;
}
