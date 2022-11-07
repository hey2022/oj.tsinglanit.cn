#include <iostream>
#include <stack>
#include <unordered_map>

class baseChange {
private:
    const std::unordered_map<int, char> digitMap{{10, 'A'},
                                                 {11, 'B'},
                                                 {12, 'C'},
                                                 {13, 'D'},
                                                 {14, 'E'},
                                                 {15, 'F'}};
    std::stack<char> answerStack;
public:
    void convert(int number, int base) {
        if (number != 0) {
            int remainder = number % base;
            answerStack.push(remainder >= 10 ? digitMap.at(remainder) : static_cast<char>(remainder + '0'));
            convert(number / base, base);
        }
    }

    std::string get() {
        std::string answer;
        while (!answerStack.empty()) {
            answer += answerStack.top();
            answerStack.pop();
        }
        return answer;
    }
};

int main() {
    int number;
    int base;
    std::cin >> number >> base;
    baseChange baseChange;
    baseChange.convert(number, base);
    std::cout << baseChange.get();
    return 0;
}
