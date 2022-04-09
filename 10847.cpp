#include <iostream>
#include <string>

int main() {
    int count = 0;
    bool flag = true;
    std::string sentence;
    std::getline(std::cin, sentence);
    for (int i = 0; i < sentence.length(); ++i) {
        if (sentence.at(i) != ' ' && flag) {
            ++count;
            flag = false;
        }
        if (sentence.at(i) == ' ') {
            for (int j = i + 1; j < sentence.length() && sentence.at(j) == ' '; ++j) {
                ++i;
            }
            flag = true;
        }
    }
    std::cout << count;
    return 0;
}
