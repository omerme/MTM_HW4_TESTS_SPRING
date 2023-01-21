cmake_minimum_required(VERSION 3.21)
project(HW4_TESTS_FROM_SPRING)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Cards)
include_directories(Players)

add_executable(HW4_TESTS_FROM_SPRING
        test.cpp
        Cards/Barfight.cpp
        Cards/Barfight.h
        Cards/Battle.cpp
        Cards/Battle.h
        Cards/Card.cpp
        Cards/Card.h
        Cards/Dragon.cpp
        Cards/Dragon.h
        Cards/Fairy.cpp
        Cards/Fairy.h
        Cards/Goblin.cpp
        Cards/Goblin.h
        Cards/Merchant.cpp
        Cards/Merchant.h
        Cards/Pitfall.cpp
        Cards/Pitfall.h
        Cards/Treasure.cpp
        Cards/Treasure.h
        Cards/Vampire.cpp
        Cards/Vampire.h
        Players/Fighter.cpp
        Players/Fighter.h
        Players/Player.cpp
        Players/Player.h
        Players/Rogue.cpp
        Players/Rogue.h
        Players/Wizard.cpp
        Players/Wizard.h
        Exception.h
        Mtmchkin.cpp
        Mtmchkin.h
        utilities.cpp
        utilities.h)
