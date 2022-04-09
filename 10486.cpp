#include <iostream>
#include <string>

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);
    for (int i = 0; i < 3; ++i) {
        std::cout << sentence << "\n";
    }
    return 0;
}
