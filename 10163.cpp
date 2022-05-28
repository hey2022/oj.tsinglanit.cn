#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <utility>

std::pair<char, int> most_frequent(const std::string& message);
std::vector<std::pair<char, int>> sort(const std::unordered_map<char, int>& map);
bool comparator(std::pair<char, int>& a, std::pair<char , int>& b);

int main() {
    std::string message;
    std::cin >> message;
    std::pair<char, int> frequent_letter = most_frequent(message);
    std::cout << frequent_letter.first << " " << frequent_letter.second;
    return 0;
}

std::pair<char, int> most_frequent(const std::string& message) {
    std::unordered_map<char, int> frequency;
    for (char letter : message) {
        ++frequency[letter];
    }
    std::vector<std::pair<char, int>> sorted = sort(frequency);
    return sorted.at(0);
}

std::vector<std::pair<char, int>> sort(const std::unordered_map<char, int>& map) {
    std::vector<std::pair<char, int>> vector_of_pairs;
    for (auto& i : map) {
        vector_of_pairs.emplace_back(i);
    }
    std::sort(vector_of_pairs.begin(), vector_of_pairs.end(), comparator);
    for (int i = 0; i < vector_of_pairs.size(); ++i) {
        for (int j = i + 1; j < vector_of_pairs.size() && vector_of_pairs.at(i).second == vector_of_pairs.at(j).second; ++j) {
            ++i;
            std::sort(&vector_of_pairs.at(i), &vector_of_pairs.at(j));
        }
    }
    return vector_of_pairs;
}

bool comparator(std::pair<char, int>& a, std::pair<char , int>& b) {
    return a.second > b.second;
}

