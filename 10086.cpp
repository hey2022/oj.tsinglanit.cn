#include <iostream>
#include <array>

int main() {
    std::array<std::array<int, 2>, 7> workingHours{};
    int max = 0;
    int day = 0;
    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cin >> workingHours.at(i).at(j);
        }
    }
    for (int i = 0; i < 7; ++i) {
        int total = workingHours.at(i).at(0) + workingHours.at(i).at(1);
        if (total > max) {
            max = total;
            day = i + 1;
        }
    }
    std::cout << day;
    return 0;
}
