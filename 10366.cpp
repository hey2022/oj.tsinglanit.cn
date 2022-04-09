#include <iostream>
#include <iomanip>

int main() {
    const int length = 10;
    float sum = 0;
    int scores[length];
    for (int & x : scores) {
        std::cin >> x;
    }
    for (int j = 0; j < length - 1; j++) {
        for (int i = 0; i < (length - 1 - j); i++) {
            if (scores[i] > scores[i + 1]) {
                std::swap(scores[i], scores[i + 1]);
            }
        }
    }
    for (int i = 1; i < length - 1; i++) {
        sum += scores[i];
    }
    std::cout << std::fixed << std::setprecision(3) << sum / 8 << std::endl;
    return 0;
}
