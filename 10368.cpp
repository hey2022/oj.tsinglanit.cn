#include <iostream>

int main() {
    int number, sum = 0;
    std::cin >> number;
    for (int i = 0; i <= number; i++) {
        if (i % 2 == 0) {
            sum += i;
        } else {
            sum -= i;
        }
    }
    std::cout << sum + 2<< std::endl;
    return 0;
}
