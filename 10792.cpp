#include <iostream>
#include <vector>
#include <array>
#include <string>

bool checkValid(const std::string& numbers);
void printString(const std::string& numbers, int n);
std::string padder(int n);

int main() {
    int n;
    int b = 0;
    std::vector<std::string> result;
    std::cin >> n;
    while (n * b < 100000) {
        result.push_back(padder(n * b) + padder(b));
        ++b;
    }
    for (const std::string& i: result) {
        if (checkValid(i)) { printString(i, n); }
    }
    return 0;
}

std::string padder(int n) {
    std::string nString = std::to_string(n);
    while (nString.length() < 5) {
        (void)nString.insert(0, "0");
    }
    return nString;
}

void printString(const std::string& numbers, int n) {
    std::cout << numbers.substr(0, 5) << " / " << numbers.substr(5, 5) << " = " << n << "\n";
}

bool checkValid(const std::string& numbers) {
    std::array<bool, 10> numbersUsed{};
    for (char i: numbers) {
        int n = i - '0';
        if (numbersUsed.at(n)) {
            return false;
        } else {
            numbersUsed.at(n) = true;
        }
    }
    return true;
}
