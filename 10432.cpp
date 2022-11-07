#include <iostream>
#include <list>
#include <algorithm>

int main() {
    int length;
    int target;
    std::cin >> target >> length;
    std::list<int> list;
    int number;
    for (int i = 0; i < length; ++i) {
        std::cin >> number;
        list.push_back(number);
    }
    auto location = std::find(list.begin(), list.end(), target);
    if (location != list.end()) {
        std::cout << "yes\n";
        std::swap(*location, *std::next(location));
    } else {
        std::cout << "no\n";
        list.insert(std::lower_bound(list.begin(), list.end(), target), target);
    }
    for (int num: list) {
        std::cout << num << " ";
    }
    return 0;
}
