#include <iostream>

int main() {
    int start_h, start_m, end_h, end_m;
    std::cin >> start_h >> start_m >> end_h >> end_m;
    int time = (end_h * 60 + end_m) - (start_h * 60 + start_m);
    std::cout << time / 60 << " " << time % 60 << std::endl;
    return 0;
}