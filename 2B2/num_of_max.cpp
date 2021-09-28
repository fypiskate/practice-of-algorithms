//
// Created by katrin on 23.09.2021.
//

#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers;
    int input;
    std::cin >> input;
    int max_value = 0;
    while (input != 0){
        numbers.push_back(input);
        if (input > max_value){
            max_value = input;
        }
        std::cin >> input;
    }
    int count = 0;
    for(int i : numbers){
        if (i == max_value){
            count++;
        }
    }
    std::cout << count;
    return 0;
}

