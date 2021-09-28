//
// Created by katrin on 08.09.2021.
//

#include <iostream>
#include <vector>

int main() {
    std::vector<int> table(9);
    int num_x = 0, num_o = 0;
    for (int i = 0; i < 9; ++i) {
        std::cin >> table[i];
        if (table[i] == 1) {
            num_x++;
        } else if (table[i] == 2) {
            num_o++;
        }
    }

    if (num_x == num_o + 1) {
        if (table[0] == 2 & table[1] == 2 & table[2] == 2
            || table[3] == 2 & table[4] == 2 & table[5] == 2
            || table[6] == 2 & table[7] == 2 & table[8] == 2
            || table[0] == 2 & table[3] == 2 & table[6] == 2
            || table[1] == 2 & table[4] == 2 & table[7] == 2
            || table[2] == 2 & table[5] == 2 & table[8] == 2
            || table[0] == 2 & table[4] == 2 & table[8] == 2
            || table[2] == 2 & table[4] == 2 & table[6] == 2
                ) {
            std::cout << "NO";
        } else {
            std::cout << "YES";
        }
    } else if (num_x == num_o) {
        if (table[0] == 1 & table[1] == 1 & table[2] == 1
            || table[3] == 1 & table[4] == 1 & table[5] == 1
            || table[6] == 1 & table[7] == 1 & table[8] == 1
            || table[0] == 1 & table[3] == 1 & table[6] == 1
            || table[1] == 1 & table[4] == 1 & table[7] == 1
            || table[2] == 1 & table[5] == 1 & table[8] == 1
            || table[0] == 1 & table[4] == 1 & table[8] == 1
            || table[2] == 1 & table[4] == 1 & table[6] == 1
                ) {
            std::cout << "NO";
        } else {
            std::cout << "YES";
        }
    } else {
        std::cout << "NO";
    }

    return 0;
}