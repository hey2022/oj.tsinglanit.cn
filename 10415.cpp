#include <iostream>

int main() {
    char letter;
    std::cin >> letter;
    if (letter >= 'a' && letter <= 'z') {
        letter -= 32;
    } else if (letter >= 'A' && letter <= 'Z') {
        letter += 32;
    }
    std::cout << letter << std::endl;
    return 0;
}
