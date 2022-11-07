#include <iostream>
#include <vector>

int main() {
    std::vector<int>::size_type n;
    int gap;
    std::cin >> n >> gap;
    std::vector<int> children(n);
    for (int &i: children) {
        std::cin >> i;
    }
    for (auto i = static_cast<std::vector<int>::size_type>(0); i < n; ++i) {
        
    }
}