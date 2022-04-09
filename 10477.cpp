#include <iostream>

int main() {
    long long decimal, index = 0;
    std::cin >> decimal;
    long long temp = decimal;
    while (temp/2 != 0) {
        temp /= 2;
        index++;
    }
    int binary[index + 1];
    for (int i = 0; i <= index; i++) {
        binary[i] = decimal % 2;
        decimal /= 2;
    }
    for (int i = index; i >= 0; i--) {
        std::cout << binary[i];
    }
    return 0;
}
