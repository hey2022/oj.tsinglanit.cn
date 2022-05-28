#include <iostream>
#include <vector>

int main() {
    int size, count = 0;
    std::cin >> size;
    std::vector<int> numbers(size, 0);
    for (int i = 0; i < size; ++i) {
        std::cin >> numbers.at(i);
    }
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (numbers.at(i) > numbers.at(j)) {
                ++count;
            }
        }
    }
    std::cout << count;
    return 0;
}
