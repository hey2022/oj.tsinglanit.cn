#include <iostream>
#include <iomanip>

int main() {
    int x, a, y, b;
    std::cin >> x >> a >> y >> b;
    std::cout << std::fixed << std::setprecision(2) << float ((x * a - y * b)) / (a - b) << std::endl;
    return 0;
}
