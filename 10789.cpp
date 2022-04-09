#include <iostream>

int main() {
    int max_x, max_y, s, n, n_temp, x, y;
    std::string ans;
    std::cin >> max_y >> max_x >> s >> n;
    x = (s - 1) % max_x;
    y = (s - 1) / max_x;
    bool grid[max_x + 3][max_y + 3];
    for (int i = 0; i < max_x + 3; ++i) {
        for (int j = 0; j < max_y + 3; ++j) {
            grid[i][j] = false;
        }
    }
    for (int i = 0; i < max_x; ++i) {
        for (int j = 0; j < max_y; ++j) {
            grid[i][j] = true;
        }
    }
    for (int i = 0; i < n; ++i) {
        std::cin >> n_temp;
        grid[(n_temp - 1) % max_x][(n_temp - 1) / max_x] = false;
    }
    while (x < max_x) {
        if (grid[x][y] && grid[x + 1][y] && grid[x + 2][y]) {
            x += 3;
            ans += "A";
        }
        if (grid[x][y] && grid[x][y + 1] && grid[x + 1][y + 1]) {
            x += 2;
            y += 1;
            ans += "B";
        }
        if (grid[x][y] && grid[x + 1][y] && grid[x + 1][y + 1] && grid[x + 1][y + 2]) {
            x += 2;
            y += 2;
            ans += "C";
        }
    }
    std::cout << ans;
    return 0;
}