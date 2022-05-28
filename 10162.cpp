#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    int size;
    std::cin >> size;
    std::vector<std::string> alphabetically(size, "");
    for (int i = 0; i < size; ++i) {
        std::cin >> alphabetically.at(i);
    }
    std::sort(alphabetically.begin(), alphabetically.end());
    for (int i = 0; i < size; ++i) {
        std::cout << alphabetically.at(i) << "\n";
    }
    return 0;
}
