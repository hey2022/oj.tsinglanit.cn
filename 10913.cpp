#include <iostream>
#include <string>

bool isPalindrone(std::string string, size_t index = 0);

int main() {
    std::string string;
    std::cin >> string;
    isPalindrone(string) ? std::cout << "yes" : std::cout << "no";
}

bool isPalindrone(std::string string, size_t index) {
    size_t end = string.size() - 1;
    if (index >= end - index) {return true;}
    if (string.at(index) == string.at(end - index)) {return isPalindrone(string, ++index);}
    return false;
}
