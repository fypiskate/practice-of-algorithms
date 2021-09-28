//
// Created by katrin on 23.09.2021.
//
#include <iostream>
#include <vector>

int main() {
    std::vector<int> distances(10, 0);
    std::vector<int> buildings;
    int cur_building;
    int cur_distance = 0;
    bool was_shop = false;
    for (int i = 0; i < 10; ++i) {
        std::cin >> cur_building;
        buildings.push_back(cur_building);
        if (cur_building == 2) {
            cur_distance = 0;
            was_shop = true;
        } else if (was_shop) {
            ++cur_distance;
        }
        if (cur_building == 1) {
            distances[i] = cur_distance;
        }
    }
    was_shop = false;
    for (int i = 9; i >= 0; --i) {
        cur_building = buildings[i];
        if (cur_building == 2) {
            cur_distance = 0;
            was_shop = true;
        } else if (was_shop) {
            ++cur_distance;
        }
        if (cur_building == 1) {
            if (distances[i] == 0 || (distances[i] != 0 & cur_distance < distances[i])) {
                distances[i] = cur_distance;
            }
        }
    }
    int max_distance = 0;
    for (int i = 0; i < 10; ++i){
        if (distances[i] > max_distance){
            max_distance = distances[i];
        }
    }
    std::cout << max_distance;
    return 0;
}