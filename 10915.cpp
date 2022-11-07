#include <iostream>
#include <algorithm>
#include <vector>

class heap {
public:
    heap(const std::vector<int> &array);

    void heapSort();

    void printHeap();

private:
    void heapify(int root, int size);

    std::vector<int> array;
    int heapSize;
};

heap::heap(const std::vector<int> &array) {
    this->heapSize = array.size();
    this->array = array;
    for (int i = heapSize / 2 - 1; i >= 0; --i) {
        heapify(i, heapSize);
    }
}

void heap::heapSort() {
    for (int i = heapSize - 1; i >= 0; --i) {
        std::swap(array.at(0), array.at(i));
        heapify(0, i);
    }
}

void heap::printHeap() {
    for (int i: array) { std::cout << i << "\n"; }
}

void heap::heapify(int root, int size) {
    int largest = root;
    int left = root * 2 + 1;
    int right = root * 2 + 2;
    if (left < size && array.at(left) > array.at(largest)) { largest = left; }
    if (right < size && array.at(right) > array.at(largest)) { largest = right; }
    if (root != largest) {
        std::swap(array.at(root), array.at(largest));
        heapify(largest, size);
    }
}

int main() {
    std::vector<int> array;
    int size;
    std::cin >> size;
    for (int i = 0; i < size; ++i) {
        int temp;
        std::cin >> temp;
        array.push_back(temp);
    }
    heap heap(array);
    heap.heapSort();
    heap.printHeap();
    return 0;
}