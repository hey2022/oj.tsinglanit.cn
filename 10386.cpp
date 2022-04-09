#include <iostream>

int main() {
    int start, end, count = 0;
    std::cin >> start >> end;
    for (int i = start; i <= end; ++i) {
        int temp = i;
        while (temp != 0) {
            if (temp % 10 == 2) {
                ++count;
            }
            temp /= 10;
        }
    }
    std::cout << count << std::endl;
    return 0;
}
