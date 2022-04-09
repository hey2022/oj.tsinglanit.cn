#include <iostream>

int main() {
    int end;
    std::cin >> end;
    if (end >= 7) {
        for (int i = 1; i <= end; i++) {
            if (i % 7 == 0) {
                std::cout << i << " ";
            }
        }
    } else {
        std::cout << 0 << std::endl;
    }
    return 0;
}
