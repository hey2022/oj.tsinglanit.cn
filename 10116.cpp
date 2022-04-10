#include <iostream>
#include <string>

int main() {
    std::string message, message1;
    std::getline(std::cin, message);
    std::getline(std::cin, message1);
    std::cout << message << message1;
    return 0;
}
