#include <iostream>
#include <iomanip>

int main() {
    int number;
    float sum = 0;
    std::cin >> number;
    for (int i = 1; i <= number; i++) {
        if (i % 2 != 0) {
            sum += 1/float(i);
        } else {
            sum -= 1/float(i);
        }
    }
    std::cout << std::fixed << std::setprecision(2) << sum << std::endl;
    return 0;
}
