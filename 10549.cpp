#include <iostream>

int main() {
    int money;
    int bigCost;
    int smallCost;
    std::cin >> money >> bigCost >> smallCost;
    for (int i = 0; i < money / bigCost; i += 2) {
        for (int j = 0; j < money / smallCost; j += 2) {
            if (bigCost * i + smallCost * j == money) {
                std::cout << i << " " << j << "\n";
            }
        }
    }
    return 0;
}
