#include <catch.hpp>

#include "mars_rover.h"


TEST_CASE("receive single command should move backwards when command is B") {
    Coordinates start(1, 2);
    
    MarsRover rover(start, end, N);
    std::vector<std::string> commands = {"B"};
    rover.acceptCommands(commands);

    Coordinates expectedPosition(1, 1);

    REQUIRE(expectedPosition.x == rover.getPosition().x);
    REQUIRE(expectedPosition.y == rover.getPosition().y);
}
