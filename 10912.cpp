#include <iostream>
#include <string>

int main() {
    std::string string;
    std::cin >> string;
    std::cout << string.end() - string.begin();
    return 0;
}
