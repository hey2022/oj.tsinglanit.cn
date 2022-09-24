#include <iostream>

int main() {
    int number;
    int result;
    std::cin >> number;
    if (number >= 10 && number < 100) {
        result = 1;
    } else {
        result = 0;
    }
    std::cout << result << "\n";
    return 0;
}
