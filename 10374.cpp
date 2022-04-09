#include <iostream>

int main() {
    int number, sum = 0, count = 0, i = 1;
    std::cin >> number;
    while (true) {
        sum += i*i;
        if (sum <= number) {
            ++count;
        } else {
            ++count;
            break;
        }
        ++i;
    }
    std::cout << count << std::endl;
    return 0;
}
