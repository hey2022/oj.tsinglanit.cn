#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    float number;
    std::cin >> number;
    std::cout << std::fixed << std::setprecision(2) << sqrt(pow(number, 2)) << std::endl;
    return 0;
}