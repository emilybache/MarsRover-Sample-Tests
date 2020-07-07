#include <catch.hpp>

#include "mars_rover.h"

TEST_CASE("follow instructions")
{
    Plateau plateau(5,5);
    Coordinates startingPosition(1,2);
    MarsRover marsRover(plateau, N, startingPosition);

    std::vector<std::string> commands = {"B", "F", "L", "F", "F", "R"};
    marsRover.acceptCommands(commands);

    REQUIRE("-1 2 N" == marsRover.currentLocation());
}