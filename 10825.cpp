#include <iostream>
#include <vector>

int main() {
    int amount;
    float cost = 0;
    std::cin >> amount;
    std::vector<int> nums(amount);
    for (int i = 0; i < amount; ++i) {
        std::cin >> nums.at(i);
    }
    for (int i: nums) {
        while (i > 0) {
            cost += 0.1;
            i -= 70;
        }
    }
    std::cout << cost << "\n";
    return 0;
}
