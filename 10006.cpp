#include <iostream>
#include <iomanip>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << std::right << std::setw(8) <<a << " " << std::setw(8) << b << " " << std::setw(8) << c << std::endl;
    return 0;
}
