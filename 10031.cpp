#include <iostream>
#include <iomanip>

int main() {
    float volume;
    int students;
    std::cin >> volume >> students;
    std::cout << std::fixed << std::setprecision(3) <<  volume/students << std::endl;
    std::cout << students*2 << std::endl;
    return 0;
}