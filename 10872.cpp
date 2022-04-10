#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <map>
#include <unordered_map>
#include <utility>

std::string encrypt(std::string message);
std::vector<char> frequency(const std::string& message);
std::vector<std::pair<char, unsigned int>> sort(const std::unordered_map<char, unsigned int>& M);

int main() {
    std::string message;
    std::getline(std::cin, message);
    std::cout << encrypt(message);
    return 0;
}

std::string encrypt(std::string message) {
    std::vector<char> frequent = frequency(message);
    for (char & i : message) {
        if (std::isalpha(i)) {
            if (i == frequent.at(0)) {
                ++i;
            } else if (frequent.size() >= 2 && i == frequent.at(1)) {
                --i;
            }
            if (std::tolower(i) < 'a') {
                i += 26;
            } else if (std::tolower(i) > 'z') {
                i -= 26;
            }
        }
    }
    return message;
}

std::vector<char> frequency(const std::string& message) {
    std::unordered_map<char, unsigned int> frequency;
    for (char letter : message) {
        if (isalpha(letter)) {
            frequency[letter]++;
        }
    }
    std::vector<std::pair<char, unsigned int>> sorted = sort(frequency);
    std::vector<char> most_frequent = {sorted.at(0).first};
    if (sorted.size() >= 2) {
        most_frequent.push_back(sorted.at(1).first);
    }
    return most_frequent;
}

std::vector<std::pair<char, unsigned int>> sort(const std::unordered_map<char, unsigned int>& M) {
    std::multimap<unsigned int, char> MM;
    for (auto it : M) {
        MM.insert({it.second, it.first});
    }
    std::vector<std::pair<char, unsigned int>> sorted;
    for (auto it = MM.rbegin(); it != MM.rend(); ++it) {
        sorted.emplace_back(it->second, it->first);
    }
    return sorted;
}
