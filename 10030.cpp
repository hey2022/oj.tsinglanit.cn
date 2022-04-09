#include <iostream>

int main() {
    char lower;
    std::cin >> lower;
    std::cout << char(toupper(lower)) << std::endl;
    return 0;
}