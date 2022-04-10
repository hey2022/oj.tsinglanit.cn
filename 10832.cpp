#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string message, flipped;
    int lowercase = 0, uppercase = 0;
    std::getline(std::cin, message);
    for (char letter : message) {
        if (std::islower(letter)) {
            ++lowercase;
            flipped += std::toupper(letter);
        } else if (std::isupper(letter)) {
            ++uppercase;
            flipped += std::tolower(letter);
        }
    }
    std::cout << flipped << "\n" << lowercase << " " << uppercase;
    return 0;
}
