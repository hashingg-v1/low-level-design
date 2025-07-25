#include "house_builder.h"

int main() {
    // Create builder and build house step by step
    HouseBuilder builder;
    House myHouse = builder.buildWalls("Brick walls")
                           .buildRoof("Tile roof")
                           .buildDoor("Wooden door")
                           .getHouse();

    myHouse.show(); // Output: House with Brick walls, Tile roof, and Wooden door

    return 0;
}
