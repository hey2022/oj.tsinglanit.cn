#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int size;
    int add;
    std::vector<int> number;
    std::cin >> size >> add;
    for (int i = 0; i < size; ++i) {
        int digit;
        std::cin >> digit;
        number.push_back(digit);
    }
    for (int i = 0; i < add; ++i) {
        (void)std::next_permutation(number.begin(), number.end());
    }
    for (int i: number) {
        std::cout << i << " ";
    }
    return 0;
}
