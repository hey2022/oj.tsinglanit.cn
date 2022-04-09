#include <iostream>

int main() {
    int num1, num2, num3, max;
    std::cin >> num1 >> num2 >> num3;
    if (num1 > num2) {
        max = num1;
    } else {
        max = num2;
    }
    if (max < num3) {
        max = num3;
    }
    std::cout << max << std::endl;
    return 0;
}
