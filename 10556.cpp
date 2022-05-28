#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int size;
    std::cin >> size;
    std::vector<int> colors(size, 0);
    for (int i = 0; i < size; ++i) {
        std::cin >> colors.at(i);
    }
    std::sort(colors.begin(), colors.end());
    for (int i = 0; i < size; ++i) {
        if (i == size - 1) {
            std::cout << colors.at(i);
        } else {
            std::cout << colors.at(i) << ",";
        }
    }
    return 0;
}
