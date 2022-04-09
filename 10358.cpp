#include <iostream>

int main() {
    int start, end;
    std::cin >> start >> end;
    for (int i = start; i <= end; i++) {
        if (i % 9 == 0) {
            std::cout << i << std::endl;
            break;
        }
    }
    return 0;
}
