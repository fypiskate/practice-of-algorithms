//
// Created by katrin on 08.09.2021.
//

#include <iostream>
#include <vector>

void exchange(std::vector<int> heroes, int i, int n) {
    if (heroes[i] == i) {
        i++;
    } else if (i == n - 2) {
        std::cout << n - 2 + 1 << " " << n - 1 + 1 << "\n";
        std::swap(heroes[n - 2], heroes[n - 1]);
    } else {
        std::cout << i + 1 << " " << n - 2 + 1 << "\n";
        std::swap(heroes[i], heroes[n - 2]);

        while (heroes[heroes[n - 2]] != i) {
            std::cout << heroes[n - 2] + 1 << " " << n - 2 + 1 << "\n";
            std::swap(heroes[heroes[n - 2]], heroes[n - 2]);
        }
        std::cout << heroes[n - 2] + 1 << " " << n - 1 + 1 << "\n";
        std::swap(heroes[heroes[n - 2]], heroes[n - 1]);

        std::cout << heroes[n - 2] + 1 << " " << n - 2 + 1 << "\n";
        std::swap(heroes[heroes[n - 2]], heroes[n - 2]);

        std::cout << i + 1 << " " << n - 1 + 1 << "\n";
        std::swap(heroes[i], heroes[n - 1]);

    }
    if (i != n - 1) {
        exchange(heroes, i, n);
    }
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> heroes(n);
    for (int i = 0; i < n; ++i) {
        heroes[i] = i;
    }
    for (int i = 0; i < m; ++i) {
        int x, y;
        std::cin >> x >> y;
        std::swap(heroes[x - 1], heroes[y - 1]);
    }
    exchange(heroes, 0, n);
    return 0;
}
