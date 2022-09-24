#include <iostream>
#include <string>

std::string reverseDna(const std::string &dna);

char reverseLetter(char dnaLetter);

int main() {
    std::string dna;
    (void) std::getline(std::cin, dna);
    std::cout << reverseDna(dna);
    return 0;
}

std::string reverseDna(const std::string &dna) {
    std::string reversedDna;
    for (char letter: dna) {
        reversedDna += reverseLetter(letter);
    }
    return reversedDna;
}

char reverseLetter(char dnaLetter) {
    if (dnaLetter == 'A') {
        return 'T';
    }
    if (dnaLetter == 'T') {
        return 'A';
    }
    if (dnaLetter == 'G') {
        return 'C';
    }
    if (dnaLetter == 'C') {
        return 'G';
    }
    return 0;
}
