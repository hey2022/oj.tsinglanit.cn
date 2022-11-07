#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int>::size_type size;
    std::cin >> size;
    std::vector<int> numbers(size);
    for (int &i: numbers) {
        std::cin >> i;
    }
    std::sort(numbers.begin(), numbers.end());
    for (int i: numbers) {
        std::cout << i << " ";
    }
    return 0;
}
