#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double x;
    double a;
    double b;
    double c;
    double d;
    std::cin >> x >> a  >> b >> c >> d;
    std::cout << std::fixed << std::setprecision(7) << a * pow(x, 3) + b * pow(x, 2) + c * x + d << "\n";
    return 0;
}
