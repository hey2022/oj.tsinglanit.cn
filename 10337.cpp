#include <iostream>
#include <vector>

int main() {
    int length;
    int target;
    int sum = 0;
    std::cin >> length >> target;
    std::vector<int> nums(length);
    for (int i = 0; i < length; ++i) {
        std::cin >> nums.at(i);
    }
    for (int i: nums) {
        if (i == target) {
            sum += 1;
        }
    }
    std::cout << sum;
    return 0;
}
