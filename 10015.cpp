#include <iostream>
#include <iomanip>

int main() {
    float f;
    std::cin >> f;
    std::cout << std::fixed << std::setprecision(5) << 5*(f-32)/9 << std::endl;
    return 0;
}