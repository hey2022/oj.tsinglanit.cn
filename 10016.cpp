#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    const float PI = 3.14159;
    float r;
    std::cin >> r;
    std::cout << std::fixed << std::setprecision(4) << 2 * r << " " << 2 * PI * r << " " << PI * pow(r,2) << std::endl;
    return 0;
}