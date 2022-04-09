#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>

int main() {
    int amount, found;
    char letter;
    std::string word;
    std::cin >> amount;
    for (int i = 0; i < amount; ++i) {
        std::cin >> letter >> word;
        found = 0;
        for (char j : word) {
            if (tolower(j) == tolower(letter)) {
                ++found;
            }
        }
        std::cout << std::fixed << std::setprecision(5) << float (found) / float (word.length()) << "\n";
    }
    return 0;
}
