#include <iostream>

int main() {
    int day;
    std::cin >> day;
    if (day == 1 || day == 3 || day == 5) {
        std::cout << "NO" << std::endl;
    } else {
        std::cout << "YES" << std::endl;
    }
    return 0;
}
