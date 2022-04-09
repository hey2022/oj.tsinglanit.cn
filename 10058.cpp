#include <iostream>

int main() {
    int num_scores, max;
    std::cin >> num_scores;
    int scores[num_scores];
    for (int i = 0; i < num_scores; i++) {
        std::cin >> scores[i];
    }
    max = scores[0];
    for (int i = 1; i < num_scores; i++) {
        if (max < scores[i]) {
            max = scores[i];
        }
    }
    std::cout << max << std::endl;
    return 0;
}