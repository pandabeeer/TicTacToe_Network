cmake_minimum_required(VERSION 3.15)
project(TicTacToe C)

set(CMAKE_C_STANDARD 99)

add_executable(TicTacToe main.c Feldausgabe.c Feldausgabe.h Logik.c Logik.h StructDefinitions.h Netzwerk.c ComputerLogic.h ComputerLogic.c Netzwerk.h)

target_link_libraries(TicTacToe ws2_32)
