#include <iostream>
#include <algorithm>
#include <array>

int main() {
    std::array<int, 3> numbers;
    for (int i = 0; i < 3; ++i) {
        std::cin >> numbers.at(i);
    }
    std::sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size(); ++i) {
        std::cout << numbers.at(i) << " ";
    }
    return 0;
}
