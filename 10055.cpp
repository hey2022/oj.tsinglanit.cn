#include <iostream>
#include <cmath>

int main() {
    int weight;
    char letter;
    std::cin >> weight >> letter;
    if (letter == 'y') {
        if (weight > 1000) {
            std::cout << 8 + std::ceil(float(weight - 1000)/500)*4 + 5<< std::endl;
        } else {
            std::cout << 8 + 5<< std::endl;
        }
    } else if (weight > 1000){
        std::cout << 8 + std::ceil(float(weight - 1000)/500)*4<< std::endl;
    } else {
        std::cout << 8 << std::endl;
    }
    return 0;
}