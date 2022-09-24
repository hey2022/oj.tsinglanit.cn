#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string sentence;
    bool capital = true;
    (void) std::getline(std::cin, sentence);
    for (char & i : sentence) {
        if (capital) {
            i = std::toupper(i);
            capital = false;
        } else if (i == ' ') {
            capital = true;
        } else {
            i = std::tolower(i);
        }
    }
    std::cout << sentence << "\n";
    return 0;
}
