#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>

int main() {
    int length;
    std::cin >> length;
    std::vector<int> numbers(length, 0);
    for (int i = 0; i < length; ++i) {
        std::cin >> numbers.at(i)
    }
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers.at(i) == 0) {
            numbers.erase(i);
        }
        std::cout << numbers.at(i) << " ";
    }
    return 0;
}
