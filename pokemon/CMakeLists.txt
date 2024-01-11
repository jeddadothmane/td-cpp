cmake_minimum_required(VERSION 3.27)
project(pokemon)

set(CMAKE_CXX_STANDARD 17)

add_executable(pokemon main.cpp
        headers/Card.h
        Card.cpp
        headers/PokemonCard.h
        PokemonCard.cpp
        headers/EnergyCard.h
        EnergyCard.cpp
        headers/TrainerCard.h
        TrainerCard.cpp
        headers/Player.h
        Player.cpp)
