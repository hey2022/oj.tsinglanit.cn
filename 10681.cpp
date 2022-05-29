#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string text;
    std::cin >> text;
    std::reverse(text.begin(), text.end());
    std::cout << text;
    return 0;
}
