#include <iostream>

int main() {
    int questions;
    std::cin >> questions;
    if (3 * questions + 11 <= questions * 5) {
        std::cout << "Tsinglan" << std::endl;
    } else {
        std::cout << "Local" << std::endl;
    }
    return 0;
}