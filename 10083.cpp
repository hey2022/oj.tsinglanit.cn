#include <iostream>

int main() {
    int length_of_road, construction_areas, start_point, end_point, amount_of_trees = 0;
    std::cin >> length_of_road;
    ++length_of_road;
    int trees[length_of_road];
    for (int i = 0; i < length_of_road; ++i) {
        trees[i] = 1;
    }
    std::cin >> construction_areas;
    for (int i = 0; i < construction_areas; ++i) {
        std::cin >> start_point >> end_point;
        for (int j = 0; j < length_of_road; ++j) {
            if (j >= start_point && j <= end_point) {
                trees[j] = 0;
            }
        }
    }
    for (int i = 0; i < length_of_road; ++i) {
        if (trees[i] == 1) {
            ++amount_of_trees;
        }
    }
    std::cout << amount_of_trees << std::endl;
    return 0;
}
