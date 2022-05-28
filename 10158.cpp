#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int size;
    std::cin >> size;
    std::vector<int> numbers(size, 0);
    for (int i = 0; i < size; ++i) {
        std::cin >> numbers.at(i);
    }
    std::cout << *std::max_element(numbers.begin(), numbers.end()) << " " <<std::max_element(numbers.begin(), numbers.end()) - numbers.begin() + 1 << "\n";
    std::cout << *std::min_element(numbers.begin(), numbers.end()) << " " <<std::min_element(numbers.begin(), numbers.end()) - numbers.begin() + 1 << "\n";
    return 0;
}
