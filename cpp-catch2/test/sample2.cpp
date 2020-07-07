#include <catch.hpp>

#include "mars_rover.h"


TEST_CASE("receive single command should move backwards when command is B") {
    Coordinates start(1, 9);
    Coordinates end(2, 9);
    std::vector<Obstacle> obstacles = {Coordinates(2,10)};

    MarsRover rover(start, end, N, obstacles);
    std::vector<std::string> commands = {"B"};
    rover.acceptCommands(commands);

    Coordinates expectedPosition(1, 8);

    REQUIRE(expectedPosition.x == rover.getPosition().x);
    REQUIRE(expectedPosition.y == rover.getPosition().y);
}
