#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string sentence;
    int length = 0;
    (void) std::getline(std::cin, sentence);
    for (char i: sentence) {
        if (std::isalpha(i) || std::isdigit(i)) {
            std::cout << i;
            ++length;
        }
        if (length >= 20) {
            std::cout << "\n";
            length = 0;
        }
    }
    return 0;
}
