#include <iostream>
#include <iomanip>

int main() {
    float x;
    double ans;
    std::cin >> x;
    if (x >= 0 && x < 5) {
        ans = -x + 2.5;
    } else if (x >= 5 && x < 10) {
        ans = 2 - 1.5 * (x-3) * (x-3);
    } else if (x >= 10 && x < 20) {
        ans = x / 2 - 1.5;
    }
    std::cout << std::fixed << std::setprecision(3) << ans << std::endl;
    return 0;
}