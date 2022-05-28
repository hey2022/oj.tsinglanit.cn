#include <iostream>
#include <vector>

int main() {
    int size, target, count = 0;
    std::cin >> size >> target;
    std::vector<int> numbers(size, 0);
    for (int i = 0; i < size; ++i) {
        std::cin >> numbers.at(i);
    }
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers.at(i) == target) {
            std::cout << i + 1 << "\n";
            ++count;
        }
    }
    if (count == 0) {
        std::cout << "NOBODY";
    } else {
        std::cout << "zongshu:" << count;
    }
    return 0;
}
