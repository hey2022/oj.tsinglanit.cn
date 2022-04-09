#include <iostream>
#include <string>

int main() {
    bool flag = false;
    std::string sentence;
    std::getline(std::cin, sentence);
    for (int i = 0; i < sentence.length(); ++i) {
        if ((sentence.at(i) == '.' || sentence.at(i) == '!' || sentence.at(i) == '?') && !flag) {
            flag = true;
            ++i;
        } else if (sentence.at(i) != '.' && sentence.at(i) != '!' && sentence.at(i) != '?' && flag) {
            std::cout << sentence.at(i);
        } else if (sentence.at(i) == '.' || sentence.at(i) == '!' || sentence.at(i) == '?') {
            std::cout << sentence.at(i);
            break;
        }
    }
    return 0;
}
