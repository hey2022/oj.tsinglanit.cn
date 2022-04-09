#include <iostream>

int main() {
    int tests, hours = 0;
    std::cin >> tests;
    int pressure[tests][2];
    for (int i = 0; i < tests; i++) {
        std::cin >> pressure[i][0];
        std::cin >> pressure[i][1];
    }
    for (int i = 0; i < tests; i++) {
        if (pressure[i][0] > 90 && pressure[i][0] <= 140 && pressure[i][1] >= 60 && pressure[i][1] <= 90) {
            hours++;
        }
    }
    std::cout << hours << std::endl;
    return 0;
}
