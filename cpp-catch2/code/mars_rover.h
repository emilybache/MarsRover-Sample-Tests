#ifndef MARS_ROVER_H
#define MARS_ROVER_H

class Plateau {
public:
    Plateau(int width, int breadth) {

    }
};

class Coordinates {

public:
    Coordinates(int x, int y) {

    }
    int x;
    int y;
};

enum Direction {
    N,S,E,W
};

class Obstacle {
public:
    Obstacle(Coordinates position) {}
};

class MarsRover {
public:
    MarsRover(Plateau plateau, Direction direction, Coordinates startingPosition) {}

    MarsRover(Coordinates coordinates, Coordinates coordinates1, Direction direction, std::vector<Obstacle> vector) {
    }

    std::string currentLocation();

    void acceptCommands(std::vector<std::string> commands);
    void acceptCommand(std::string command);
    Coordinates getPosition();
    bool statusOk();

    void forward();
    void backward();
    void turnRight();
    void turnLeft();
};



#endif //MARS_ROVER_H
