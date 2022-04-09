#include <iostream>

int main() {
    int x = 6, y = 10;
    bool grid[x][y];
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            grid[x][y] = true;
        }
    }
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            std::cout << grid[x][y];
        }
        std::cout << "\n";
    }
}