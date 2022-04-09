#include <iostream>

void draw_row(int length, char character) {
    for (int x = 0; x < length; ++x) {
        std::cout << character;
    }
    std::cout << std::endl;
}

void hollow_row(int length, char character) {
    std::cout << character;
    for (int x = 0; x < length - 2; ++x) {
        std::cout << " ";
    }
    std::cout << character << std::endl;
}

void fill(int height, int width, char character) {
    for (int y = 0; y < height; ++y) {
        draw_row(width, character);
    }
}

void hollow(int height, int width, char character) {
    draw_row(width, character);
    for (int y = 0; y < height - 2; ++y) {
        hollow_row(width, character);
    }
    draw_row(width, character);
}

int main() {
    int height, width;
    char character;
    bool solid;
    std::cin >> height >> width >> character >> solid;
    if (solid) {
        fill(height, width, character);
    } else {
        hollow(height, width, character);
    }
    return 0;
}
