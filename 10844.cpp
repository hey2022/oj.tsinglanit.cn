#include <iostream>
#include <string>

int main() {
    std::string message;
    int number;
    std::getline(std::cin, message);
    std::cin >> number;
    std::cout << message.substr(0, number) << "\n" << message.substr(number, message.length());
    return 0;
}
