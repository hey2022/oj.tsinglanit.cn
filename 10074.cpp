#include <iostream>

int main() {
    int number, count = 0, temp;
    std::cin >> number;
    for (int i = 1; i <= number; ++i) {
        temp = i;
        while (temp != 0) {
            if (temp % 10 == 1) {
                ++count;
            }
            temp /= 10;
        }
    }
    std::cout << count << std::endl;
    return 0;
}
