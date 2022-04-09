#include <iostream>

int main() {
    int lucky, encouragement;
    std::cin >> lucky >> encouragement;
    if (lucky >= 10 || encouragement >= 20) {
        std::cout << 1 << std::endl;
    } else if (lucky < 10 && encouragement < 20){
        std::cout << 0 << std::endl;
    }
    return 0;
}