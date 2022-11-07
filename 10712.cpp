#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>

int main() {
    std::stack<char> bracketStack;
    const std::unordered_map<char, char> pairs{{'(', ')'}, {'[', ']'}, {'{', '}'}};
    bool valid = true;
    std::string bracketString;
    std::cin >> bracketString;
    for (char i: bracketString) {
        if (i == '(' || i == '{' || i == '[') {
            bracketStack.push(i);
        } else if (i == ')' || i == '}' || i == ']') {
            if (i == pairs.at(bracketStack.top())) {
                bracketStack.pop();
            } else {
                valid = false;
                break;
            }
        } else {}
    }
    if (valid) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
    return 0;
}
