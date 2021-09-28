cmake_minimum_required(VERSION 3.20)
project(trenirovki)

set(CMAKE_CXX_STANDARD 17)

add_executable(hard_dif 2A1/hard_dif.cpp)
add_executable(parallel 2A1/parallel.cpp)
add_executable(tictactoe 2A1/tictactoe.cpp)
add_executable(futurama 2A1/futurama.cpp)
add_executable(triangles 2A1/triangles.cpp)

add_executable(num_of_max 2B2/num_of_max.cpp)
add_executable(shops 2B2/shops.cpp)
add_executable(palindrome 2B2/palindrome.cpp)
add_executable(benches 2B2/benches.cpp)
add_executable(diplomas 2B2/diplomas.cpp)

add_executable(macros Stepik/macros.cpp)
add_executable(log2 Stepik/log2.cpp)