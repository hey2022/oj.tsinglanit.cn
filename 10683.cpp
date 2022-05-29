#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string text;
    char letter;
    std::cin >> text >> letter;
    std::cout << std::count(text.begin(), text.end(), letter);
    return 0;
}
