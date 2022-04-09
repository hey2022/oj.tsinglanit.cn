#include <iostream>
#include <iomanip>

int main() {
    int kwh;
    double rmb;
    std::cin >> kwh;
    if (kwh <= 150) {
        rmb = kwh * 0.4463;
    } else if (kwh >= 151 && kwh <= 400) {
        rmb = 150 * 0.4463 + (kwh-150) * 0.4663;
    } else if (kwh >= 401) {
        rmb = 150 * 0.4463 + 400-150 * 0.4663 + (kwh-400) * 0.5663;
    }
    std::cout << std::fixed << std::setprecision(1) << rmb << std::endl;
    return 0;
}
