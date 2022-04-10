#include <iostream>
#include <string>

int main() {
    std::string message;
    int count = 0;
    std::getline(std::cin, message);
    for (char i : message) {
        if (std::isdigit(i)) {
            ++count;
        }
    }
    std::cout << count;
    return 0;
}
