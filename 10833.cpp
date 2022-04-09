#include <iostream>
#include <string>

int main() {
    char letter;
    std::string sentence;
    std::getline(std::cin, sentence);
    std::cin >> letter;
    for (int i = 0; i < sentence.length(); i += 2) {
        sentence.at(i) = letter;
    }
    std::cout << sentence;
    return 0;
}
