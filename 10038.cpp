#include <iostream>

int main() {
    char letter;
    std::cin >> letter;
    int ASCII = int(letter);
    if (ASCII % 2 == 1) {
        std::cout << "YES" << std::endl;
    } else if (ASCII % 2 == 0){
        std::cout << "NO" << std::endl;
    }
    return 0;
}