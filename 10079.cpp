#include <iostream>

int main() {
    int amount_of_apples, height, count = 0;
    std::cin >> amount_of_apples;
    int apple_heights[amount_of_apples];
    for (int i = 0; i < amount_of_apples; ++i) {
        std::cin >> apple_heights[i];
    }
    std::cin >> height;
    for (int i = 0; i < amount_of_apples; ++i) {
        if (apple_heights[i] <= height + 30) {
            ++count;
        }
    }
    std::cout << count << std::endl;
    return 0;
}
