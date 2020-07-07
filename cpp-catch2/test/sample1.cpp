#include <catch.hpp>

#include "mars_rover.h"

TEST_CASE("can rotate left")
{
    Plateau plateau(5,5);
    Coordinates startingPosition(1,2);
    MarsRover marsRover(plateau, N, startingPosition);

    marsRover.turnLeft();

    REQUIRE("1 2 W" == marsRover.currentLocation());
}


