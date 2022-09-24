#include <iostream>
#include <iomanip>

int main() {
    double a;
    double b;
    std::cin >> a >> b;
    std::cout << std::fixed << std::setprecision(9) << a / b << "\n";
    return 0;
}
