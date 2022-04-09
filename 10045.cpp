#include <iostream>

int main() {
    int apple;
    std::cin >> apple;
    if (apple == 0) {
        std::cout << "Today, I ate no apple." << std::endl;
    } else if (apple == 1) {
        std::cout << "Today, I ate 1 apple." << std::endl;
    } else {
        std::cout << "Today, I ate "<< apple << " apples." << std::endl;
    }
    return 0;
}