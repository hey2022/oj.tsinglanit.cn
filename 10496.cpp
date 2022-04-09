#include <iostream>
#include <string>

int main() {
    std::string sentence;
    char letter;
    int count = 0;
    getline(std::cin, sentence);
    std::cin >> letter;
    for (char i : sentence) {
        if (i == letter) {
            ++count;
        }
    }
    std::cout << count;
    return 0;
}
