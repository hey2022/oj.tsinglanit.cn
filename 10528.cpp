#include <iostream>

int main() {
    int number;
    std::cin >> number;
    int result = number > 100 ? 50 * number : 80 * number;
    std::cout << result;
    return 0;
}
