#include <iostream>
#include <string>

char frequency[26][1] = {};
char frequency_compare[26][1] = {};
char rotate(char letter, int key) {
    if (letter >= 'a' && letter <= 'z') {
        letter = char(letter + key);
        if (letter > 'z') {
            letter -= 26;
        } else if (letter < 'a') {
            letter += 26;
        }
    } else if (letter >= 'A' && letter <= 'Z') {
        letter = char(letter + key);
        if (letter > 'Z') {
            letter -= 26;
        } else if (letter < 'A') {
            letter += 26;
        }
    }
    return letter;
}

std::string encrypt(const std::string& message, int key) {
    std::string encrypted;
    for (char character : message) {
        encrypted += rotate(character, key);
    }
    return encrypted;
}

std::string decrypt(const std::string& message, int key) {
    return encrypt(message, -key);
}

int main() {
    std::string encrypted_message;
    std::getline(std::cin, encrypted_message);
    for (int key = 0; key < 26; ++key) {
        std::cout << key << std::endl;
        std::cout << decrypt(encrypted_message, key) << std::endl;
    }
    return 0;
}
