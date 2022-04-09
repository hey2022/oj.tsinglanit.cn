#include <iostream>
#include <string>

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);
    std::cout << sentence.length() / 3;
    return 0;
}
