#pragma once
#include "house.h"

// Builder: helps build a House step by step
class HouseBuilder {
private: 
    House house; // the house we're building

public:
    // Each method sets one part of the house
    HouseBuilder& buildWalls(const std::string& type) {
        house.walls = type;
        return *this; // return self for chaining
    }

    HouseBuilder& buildRoof(const std::string& type) {
        house.roof = type;
        return *this;
    }

    HouseBuilder& buildDoor(const std::string& type) {
        house.door = type;
        return *this;
    }

    // Final method to get the finished house
    House getHouse() {
        return house;
    }
};
