#include <iostream>
#include <string>

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);
    for (char i : sentence) {
        if (i != '.') {
            std::cout << i;
        } else {
            std::cout << ".";
            break;
        }
    }
    return 0;
}
