#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    const float PI = 3.14;
    double radius;
    std::cin >> radius;
    std::cout << std::fixed << std::setprecision(2) << float(4)/3*PI*pow(radius,3) << std::endl;
    return 0;
}