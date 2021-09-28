//
// Created by katrin on 07.09.2021.
//
#include <iostream>

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    if (a == 0) {
        if (b == 0) {
            std::cout << "INF";
        } else {
            std::cout << "NO";
        }
    } else {
        if (b % a == 0) {
            if (c != 0) {
                if (b / a != d / c) {
                    std::cout << -b / a;
                } else {
                    std::cout << "NO";
                }
            } else {
                std::cout << -b / a;
            }
        } else {
            std::cout << "NO";
        }
        return 0;
    }
}