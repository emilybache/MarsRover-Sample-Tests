#include <catch.hpp>

#include "mars_rover.h"


TEST_CASE("receive single command should move backwards when command is B") {
    Coordinates start(1, 9);
    std::vector<Obstacle> obstacles = {Coordinates(2,10)};
    Plateau plateau(2,10);
    plateau.setObstacles(obstacles);

    MarsRover rover(plateau, N, start);
    std::vector<std::string> commands = {"B"};
    rover.acceptCommands(commands);

    Coordinates expectedPosition(1, 8);

    REQUIRE(expectedPosition.x == rover.getPosition().x);
    REQUIRE(expectedPosition.y == rover.getPosition().y);
}
