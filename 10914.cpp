#include <iostream>
#include <vector>

int binarySearch(std::vector<int> vector, int target, int low, int high);

int main() {
    std::vector<int> vector;
    int size;
    std::cin >> size;
    for (int i = 0; i < size; ++i) {
        int number;
        std::cin >> number;
        vector.push_back(number);
    }
    int target;
    std::cin >> target;
    std::cout << binarySearch(vector, target, 0, size - 1);
    return 0;
}

int binarySearch(std::vector<int> vector, int target, int low, int high) {
    while (low <= high) {
        int mid = (low + high) / 2;
        if (vector.at(mid) > target) {
            high = mid - 1;
        } else if (vector.at(mid) < target) {
            low = mid + 1;
        } else if (vector.at(mid) == target){
            return mid;
        }
    }
    return -1;
}
