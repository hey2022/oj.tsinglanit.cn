#include <iostream>
#include <string>

int main() {
    int sum = 0;
    std::string sentence, number;
    std::getline(std::cin, sentence);
    for (int i = 0; i < sentence.length(); ++i) {
        if (std::isdigit(sentence.at(i))) {
            number = "";
            for (int j = i; j < sentence.length() && std::isdigit(sentence.at(j)); ++j) {
                number += sentence.at(j);
                ++i;
            }
            sum += std::stoi(number);
        }
    }
    std::cout << sum;
    return 0;
}
