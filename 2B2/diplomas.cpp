//
// Created by katrin on 23.09.2021.
//

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int sum = 0;
    int max_count = 0;
    for (int i = 0; i < n; ++i) {
        int cur_count;
        std::cin >> cur_count;
        sum += cur_count;
        if(cur_count > max_count){
            max_count = cur_count;
        }
    }
    std::cout << sum - max_count;
    return 0;
}
