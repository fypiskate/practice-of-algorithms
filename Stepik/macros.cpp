//
// Created by katrin on 27.09.2021.
//
#include <iostream>
#include <cmath>

#define MAX(x, y, r) do{int l = (x); int m = (y); r = l > m ? l : m;}while(false);

int main() {
    int a = sqrt(10);
    int b = 10;
    int c = 0;
    MAX(a, b, c);
    std::cout << c << "\n";
    MAX(++a, b, c);
    std::cout << c;

//    int x = a += b;
//    int y = b;
//    int r = c;
//    do {
//        int l = (a += b);
//        int m = (y);
//        r = l > m ? l : m;
//    }
//    while (false);
//    std::cout << r;

    return 0;
}