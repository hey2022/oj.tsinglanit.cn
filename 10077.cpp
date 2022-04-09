#include <iostream>

int main() {
    int days, wage = 0, daily = 1, count = 0;
    std::cin >> days;
    for (int i = 0; i < days; ++i) {
        ++count;
        wage += daily;
        if (count == daily) {
            ++daily;
            count = 0;
        }
    }
    std::cout << wage << std::endl;
    return 0;
}
