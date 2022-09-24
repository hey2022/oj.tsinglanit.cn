#include <iostream>

int reverse(int num);

int main() {
    int num;
    std::cin >> num;
    std::cout << reverse(num);
    return 0;
}

int reverse(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed *= 10;
        reversed += num % 10;
        num /= 10;
    }
    return reversed;
}
