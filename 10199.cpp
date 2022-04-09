#include <iostream>

int main() {
    char letter;
    std::cin >> letter;
    if (letter >= 'A' && letter <= 'Z') {
        std::cout << "是" << std::endl;
    } else {
        std::cout << "否" << std::endl;
    }
    return 0;
}
