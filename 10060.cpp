#include <iostream>

int main() {
    int gold, silver, bronze, total = 0, total_gold = 0, total_silver = 0, total_bronze = 0, days;
    std::cin >> days;
    for (int i = 0; i < days; i++) {
        std::cin >> gold >> silver >> bronze;
        total_gold += gold;
        total_silver += silver;
        total_bronze += bronze;
        total += gold + silver + bronze;
    }
    std::cout << total_gold << " " << total_silver << " " << total_bronze << " " << total << std::endl;
    return 0;
}
