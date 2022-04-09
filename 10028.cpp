#include <iostream>
#include <cmath>

int main() {
    int apples, rate, hours;
    std::cin >> apples >> rate >> hours;
    if (floor(apples - float (hours) / rate) >= 0) {
        std::cout << floor(apples - float(hours) / rate) << std::endl;
    } else {
        std::cout << 0 << std::endl;
    }
    return 0;
}