#include <iostream>
#include <string>
#include <stack>
#include <cctype>

void getNums(std::stack<int> &stack, int &a, int &b);

bool isNum(const std::string &number);

int main() {
    std::stack<int> postfix;
    std::string tmpString;
    do {
        std::cin >> tmpString;
        int a;
        int b;
        if (isNum(tmpString)) {
            postfix.push(std::stoi(tmpString));
        } else if (tmpString == "/") {
            getNums(postfix, a, b);
            postfix.push(a / b);
        } else if (tmpString == "*") {
            getNums(postfix, a, b);
            postfix.push(a * b);
        } else if (tmpString == "+") {
            getNums(postfix, a, b);
            postfix.push(a + b);
        } else if (tmpString == "-") {
            getNums(postfix, a, b);
            postfix.push(a - b);
        } else {}
    } while (tmpString != "@");
    std::cout << postfix.top();
    return 0;
}

void getNums(std::stack<int> &stack, int &a, int &b) {
    b = stack.top();
    stack.pop();
    a = stack.top();
    stack.pop();
}

bool isNum(const std::string &number) {
    bool isNum = true;
    for (char i: number) {
        if (!std::isdigit(i)) {
            isNum = false;
            break;
        }
    }
    return isNum;
}
