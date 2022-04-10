#include <iostream>
#include <string>
#include <cctype>

std::string encrypt_message(const std::string& message);
char encrypt(char letter);

int main() {
    std::string message, encrypted;
    std::getline(std::cin, message);
    std::cout << encrypt_message(message);
    return 0;
}

std::string encrypt_message(const std::string& message) {
    std::string encrypted;
    for (char i : message) {
        encrypted += encrypt(i);
    }
    return encrypted;
}

char encrypt(char letter) {
    if (!std::isalpha(letter)) {
        return letter;
    }
    if (letter == 'z') {
        return 'a';
    }
    if (letter == 'Z') {
        return 'A';
    }
    return char (letter + 1);
}
