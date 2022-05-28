#include <algorithm>
#include <iostream>
#include <functional>
#include <vector>

int main() {
    int size, nth_largest_number, temp;
    std::cin >> size >> nth_largest_number;
    std::vector<int> numbers;
    for (int i = 0; i < size; ++i) {
        std::cin >> temp;
        if (std::find(numbers.begin(), numbers.end(), temp) == numbers.end()) {
            numbers.push_back(temp);
        }
    }
    std::sort(numbers.begin(), numbers.end(), std::greater<int>());
    if (nth_largest_number > numbers.size()) {
        std::cout << "NO RESULT";
    } else {
        std::cout << numbers.at(nth_largest_number - 1);
    }
    return 0;
}
