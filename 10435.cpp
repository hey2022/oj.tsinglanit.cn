#include <iostream>
#include <string>

int main() {
    std::string message;
    std::getline(std::cin, message);
    for (int i = message.length() - 1; i >= 0; --i) {
        std::cout << message.at(i);
    }
    return 0;
}
