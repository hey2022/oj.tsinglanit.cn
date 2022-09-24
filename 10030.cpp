#include <iostream>

int main() {
    char lower;
    std::cin >> lower;
    std::cout << static_cast<char>(std::toupper(lower)) << "\n";
    return 0;
}
