#include <iostream>
#include <iomanip>

int main() {
    int num_scores;
    std::cin >> num_scores;
    float scores[num_scores], total = 0;
    for (int i = 0; i < num_scores; i++) {
        std::cin >> scores[i];
    }
    for (int i = 0; i < num_scores; i++) {
        total += scores[i];
    }
    std::cout << std::fixed << std::setprecision(4) << float(total) / num_scores << std::endl;
    return 0;
}