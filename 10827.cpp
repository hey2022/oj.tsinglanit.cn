#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string message;
    int alpha = 0, space = 0, num = 0, characters = 0;
    std::getline(std::cin, message);
    for (char letter : message) {
        if (std::isalpha(letter)) {
            ++alpha;
        } else if (letter == ' ') {
            ++space;
        } else if (std::isdigit(letter)){
            ++num;
        } else {
            ++characters;
        }
    }
    std::cout << alpha << " " << num << " " << space << " " << characters;
    return 0;
}
