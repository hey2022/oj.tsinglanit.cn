#include <iostream>
#include <iomanip>

int main() {
    double r1, r2;
    std::cin >> r1 >> r2;
    std::cout << std::fixed << std::setprecision(2) << 1/(1/r1+1/r2)<< std::endl;
    return 0;
}