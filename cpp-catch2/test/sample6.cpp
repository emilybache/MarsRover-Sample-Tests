#include <catch.hpp>

#include "mars_rover.h"


TEST_CASE("receive commands") {
    Plateau plateau(10,10);
    Coordinates startingPosition(0, 0);

    int forward = rand() % 20;
    MarsRover rover(plateau, N, startingPosition);
    for (int i = 0; i < forward; ++i) {
        rover.forward();
    }
    if (forward < 10) {
        REQUIRE(rover.statusOk());
    } else {
        // outside range of plateau
        REQUIRE(!rover.statusOk());
    }


}
