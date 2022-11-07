#include <iostream>

void reverse(int num);

int main() {
    int num;
    std::cin >> num;
    reverse(num);
}

void reverse(int num) {
    std::cout << num % 10;
    num /= 10;
    if (num != 0) { reverse(num); }
}
