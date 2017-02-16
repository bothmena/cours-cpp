cmake_minimum_required(VERSION 3.6)
project(CPlusPlus)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(TD2_EX1_FILES TD2/EX1/main.cpp TD2/EX1/compte.h TD2/EX1/compte.cpp)
add_executable(TD2_EX1 ${TD2_EX1_FILES})

set(TD2_EX2_FILES TD2/EX2/main.cpp TD2/EX2/notes.h TD2/EX2/notes.cpp)
add_executable(TD2_EX2 ${TD2_EX2_FILES})

set(TD2_EX3_FILES TD2/EX3/main.cpp TD2/EX3/abonne.h TD2/EX3/abonne.cpp TD2/EX3/operateur.h TD2/EX3/operateur.cpp )
add_executable(TD2_EX3 ${TD2_EX3_FILES})

set(TD3_Ecole_FILES TD3/Ecole/main.cpp TD3/Ecole/Etudiant.cpp TD3/Ecole/Etudiant.hpp TD3/Ecole/Date.cpp TD3/Ecole/Date.hpp TD3/Ecole/Ecole.cpp TD3/Ecole/Ecole.hpp)
add_executable(TD3_Ecole ${TD3_Ecole_FILES})