#include <iostream>

int main() {
    char opp_suit, suit;
    int min, big_min, opp_num, num;
    bool bigger, playable;
    for (int i = 0; i < 5; i++) {
        min = 10;
        big_min = 10;
        bigger = false;
        playable = false;
        std::cin >> opp_num >> opp_suit;
        for (int j = 0; j < 5; j++) {
            std::cin >> num >> suit;
            if (suit == opp_suit) {
                playable = true;
                if (num > opp_num && num < big_min) {
                    bigger = true;
                    big_min = num;
                }
                if (num < min) {
                    min = num;
                }
            }
        }
        if (!playable) {
            std::cout << "NONE" << std::endl;
        } else {
            if (bigger) {
                std::cout << big_min << " " << opp_suit << std::endl;
            } else {
                std::cout << min << " " << opp_suit << std::endl;
            }
        }
    }
    return 0;
}
