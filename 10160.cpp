#include <iostream>
#include <vector>

int main() {
    int size, count = 0;
    std::cin >> size;
    std::vector<int> carriages(size, 0);
    for (int i = 0; i < size; ++i) {
        std::cin >> carriages.at(i);
    }
    for (int i = 0; i < size; ++i) {
        for (int j = i; j < size; ++j) {
            if (carriages.at(i) > carriages.at(j)) {
                ++count;
            }
        }
    }
    std::cout << count;
    return 0;
}
