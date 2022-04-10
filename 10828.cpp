#include <iostream>
#include <string>

int main() {
    std::string message;
    char find;
    int count = 0;
    std::getline(std::cin, message);
    std::cin >> find;
    for (int i = 0; i < message.length(); ++i) {
        if (message.at(i) == find) {
            std::cout << i << " ";
            ++count;
        }
    }
    std::cout << "\n" << count;
    return 0;
}
