#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    float ax, ay, bx, by;
    std::cin >> ax >> ay;
    std::cin >> bx >> by;
    std::cout << std::fixed << std::setprecision(3) << sqrt(pow(ax-bx,2) + pow(ay-by, 2)) << std::endl;
    return 0;
}

