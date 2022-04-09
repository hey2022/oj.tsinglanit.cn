#include <iostream>

int main() {
    for (int rooster = 1; rooster <= 100; ++rooster) {
        for (int hen = 1; hen <= 100; ++hen) {
            for (int chick = 1; chick <= 100; ++chick) {
                if (rooster * 5 + hen * 3 + chick / 3 == 100 && rooster + hen + chick == 100 && chick % 3 == 0) {
                    std::cout << rooster << " " << hen << " " << chick << std::endl;
                }
            }
        }
    }
    return 0;
}
