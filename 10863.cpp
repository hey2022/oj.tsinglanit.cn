#include <iostream>

int c(int m, int n);

int main() {
    int inSize;
    int m;
    int n;
    std::cin >> inSize;
    for (int i = 0; i < inSize; ++i) {
        std::cin >> m >> n;
        std::cout << c(m, n) << "\n";
    }
    return 0;
}

int c(int m, int n) {

}