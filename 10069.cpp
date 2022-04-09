#include <iostream>

int main() {
    double ball_height, distance = 0;
    std::cin >> ball_height;
    for (int i = 0; i < 10; i++) {
        distance += ball_height * 1.5;
        ball_height /= 2;
    }
    distance -= ball_height;
    std::cout << distance << std::endl;
    std::cout << ball_height << std::endl;
    return 0;
}
