#include <iostream>
#include <string>

std::string reverse_dna(const std::string& dna);
char reverse_letter(char dna_letter);

int main() {
    std::string dna;
    std::getline(std::cin, dna);
    std::cout << reverse_dna(dna);
    return 0;
}

std::string reverse_dna(const std::string& dna) {
    std::string reversed_dna;
    for (char letter : dna) {
        reversed_dna += reverse_letter(letter);
    }
    return reversed_dna;
}

char reverse_letter(char dna_letter) {
    if (dna_letter == 'A') {
        return 'T';
    }
    if (dna_letter == 'T') {
        return 'A';
    }
    if (dna_letter == 'G') {
        return 'C';
    }
    if (dna_letter == 'C') {
        return 'G';
    }
    return 0;
}
