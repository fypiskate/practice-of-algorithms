//
// Created by katrin on 10.09.2021.
//

#include <iostream>

int main() {
    int p;
    std::cin >> p;

    int a = p / 3;
    int b = (p - a) / 2;
    int c = p - a - b;

    if (c >= a + b) {
        std::cout << "-1";
    } else {
        std::cout << a << " " << b << " " << c << "\n";
        if (p % 2 == 0) {
            std::cout << 2 << " " << (p - 2) / 2 << " " << (p - 2) / 2;
        } else {
            std::cout << 1 << " " << (p - 1) / 2 << " " << (p - 1) / 2;
        }
    }

    return 0;
}