#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> array;
    int size;
    std::cin >> size;
    for (int i = 0; i < size; ++i) {
        int temp;
        std::cin >> temp;
        array.push_back(temp);
    }
    std::make_heap(array.begin(), array.end());
    std::sort_heap(array.begin(), array.end());
    for (int i: array) { std::cout << i << " "; }
    return 0;
}