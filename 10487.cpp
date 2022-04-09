#include <iostream>
#include <string>

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);
    for (int i = 0; i < sentence.length() - 3; i += 3) {
        for (int j = i; j < sentence.length(); ++j) {
            std::cout << sentence.at(j);
        }
    }
    return 0;
}
