#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int size, temp;
    std::cin >> size;
    std::vector<int> numbers;
    for (int i = 0; i < size; ++i) {
        std::cin >> temp;
        if (std::find(numbers.begin(), numbers.end(), temp) == numbers.end()) {
            numbers.push_back(temp);
        }
    }
    std::sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size(); ++i) {
        std::cout << numbers.at(i) << "\n";
    }
    return 0;
}
