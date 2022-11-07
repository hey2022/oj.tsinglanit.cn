#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>

class validChecker {
private:
    const std::unordered_map<char, char> pairs{{'(', ')'},
                                               {'[', ']'},
                                               {'{', '}'},
                                               {'<', '>'}};
    const std::unordered_map<char, int> value{{'<', 0},
                                              {'(', 1},
                                              {'[', 2},
                                              {'{', 3}};
public:
    bool verify(const std::string& bracketString) {
        bool valid = true;
        std::stack<char> bracketStack;
        for (char i: bracketString) {
            if (i == '(' || i == '{' || i == '[' || i == '<') {
                if (bracketStack.empty() || i <= value.at(bracketStack.top())) {
                    bracketStack.push(i);
                } else {
                    valid = false;
                    break;
                }
                bracketStack.push(i);
            } else if (i == ')' || i == '}' || i == ']' || i == '>') {
                if (i == pairs.at(bracketStack.top())) {
                    bracketStack.pop();
                } else {
                    valid = false;
                    break;
                }
            } else {}
        }
        return valid;
    }
};

int main() {
    validChecker brackets;
    int inputSize;
    std::cin >> inputSize;
    for (int i = 0; i < inputSize; ++i) {
        std::string bracketString;
        std::cin >> bracketString;
        if (brackets.verify(bracketString)) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
    return 0;
}
