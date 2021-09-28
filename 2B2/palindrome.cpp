//
// Created by katrin on 23.09.2021.
//
#include <iostream>

int main() {
    std::string input;
    std::cin >> input;
    int count = 0;
    for (int i = 0; i < input.size() / 2; ++i) {
        if (input[i] != input[input.size() - 1 - i]){
            ++count;
        }
    }
    std::cout << count;
    return 0;
}
