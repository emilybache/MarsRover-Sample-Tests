#include <catch.hpp>

#include "mars_rover.h"

TEST_CASE("can move")
{
    Plateau plateau(5,5);
    Coordinates startingPosition(1,2);
    MarsRover marsRover(plateau, N, startingPosition);

    marsRover.turnLeft();
    CHECK("1 2 W" == marsRover.currentLocation());
    marsRover.turnLeft();
    CHECK("1 2 S" == marsRover.currentLocation());
    marsRover.turnLeft();
    CHECK("1 2 E" == marsRover.currentLocation());
    marsRover.forward();
    CHECK("2 2 E" == marsRover.currentLocation());
    marsRover.backward();
    CHECK("1 2 E" == marsRover.currentLocation());
    marsRover.turnRight();
    CHECK("1 2 S" == marsRover.currentLocation());
}

