#include <iostream>

int main() {
    int start, end, sum = 0;
    std::cin >> start >> end;
    for (int i = start; i <= end; i++) {
        if (i % 2 == 1) {
            sum += i;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}
