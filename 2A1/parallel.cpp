//
// Created by katrin on 07.09.2021.
//
#include <iostream>
#include <vector>

double return_k(double x1, double y1, double x2, double y2) {
    return x1 != x2 ? (y2 - y1) / (x2 - x1) : 0;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<double> coord(8);
    std::vector<double> ks(6);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 8; j++) {
            std::cin >> coord[j];
        }
        ks[0] = return_k(coord[0], coord[1], coord[2], coord[3]);
        ks[1] = return_k(coord[0], coord[1], coord[4], coord[5]);
        ks[2] = return_k(coord[0], coord[1], coord[6], coord[7]);
        ks[3] = return_k(coord[2], coord[3], coord[4], coord[5]);
        ks[4] = return_k(coord[2], coord[3], coord[6], coord[7]);
        ks[5] = return_k(coord[4], coord[5], coord[6], coord[7]);

        int ans = 0;
        for (int i = 0; i < 5; ++i) {
            for (int j = i + 1; j < 6; ++j) {
                if (ks[i] == ks[j]) {
                    ans++;
                }
            }
        }

        if (ans == 2) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }

        coord.clear();
        ks.clear();
    }
    return 0;
}
