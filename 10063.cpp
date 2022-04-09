#include <iostream>

int main() {
    int amount, _1_ = 0, _5_ = 0, _10_ = 0, number;
    std::cin >> amount;
    for (int i = 0; i < amount; i++) {
        std::cin >> number;
        if (number == 1) {
            _1_ += 1;
        } else if (number == 5) {
            _5_ += 1;
        } else if (number == 10) {
            _10_ += 1;
        }
    }
    std::cout << _1_ << std::endl;
    std::cout << _5_ << std::endl;
    std::cout << _10_ << std::endl;
    return 0;
}
