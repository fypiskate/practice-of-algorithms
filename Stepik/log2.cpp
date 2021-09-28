//
// Created by katrin on 27.09.2021.
//

#include <iostream>
int log2(int a){
    int p = 0;
    int l = 1;
    while(l <= a){
        l *= 2;
        p++;
    }
    return p-1;
}

int main(){
    int t;
    std::cin >> t;
    for (int i = 0; i < t; ++i){
        int a = 0;
        std::cin >> a;
        std::cout << log2(a) << "\n";
    }
    return 0;
}