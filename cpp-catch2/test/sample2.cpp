#include <catch.hpp>

#include "mars_rover.h"


TEST_CASE("receive single command should move backwards when command is B") {
    Plateau plateau(5,5);
    Coordinates startingPosition(1,2);
    MarsRover marsRover(plateau, N, startingPosition);
	
	std::vector<std::string> commands = {"B"};
    rover.acceptCommands(commands);

    Coordinates expectedPosition(1, 1);

    REQUIRE(expectedPosition.x == rover.getPosition().x);
    REQUIRE(expectedPosition.y == rover.getPosition().y);
}
