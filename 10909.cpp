#include <iostream>

void reverse(int n);

int main() {
    int n;
    std::cin >> n;
    reverse(n);
    return 0;
}

void reverse(int num) {
    std::cout << num % 10;
    num /= 10;
    if (num != 0) { reverse(num); }
}
