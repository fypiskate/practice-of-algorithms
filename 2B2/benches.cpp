//
// Created by katrin on 23.09.2021.
//

#include <iostream>
#include <vector>

int main() {
    int l, k;
    std::cin >> l >> k;
    std::vector<bool> cubes(l, false);
    for (int i = 0; i < k; ++i) {
        int ind;
        std::cin >> ind;
        cubes[ind] = true;
    }
    int i = (l - 1) / 2;
    while ((i >= 0) & !cubes[i]) {
        --i;
    }
    int j = l / 2;
    while ((j < l) & !cubes[j]) {
        ++j;
    }
    if (i == j) {
        std::cout << i;
    } else {
        std::cout << i << " " << j;
    }
    return 0;
}

