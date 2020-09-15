#ifndef MARS_ROVER_H
#define MARS_ROVER_H

class Coordinates 
{

public:
    Coordinates(int x, int y) {}
    int x;
    int y;
};

enum Direction 
{
    N,S,E,W
};

class Obstacle 
{
public:
    Obstacle(Coordinates position) {}
};

class Plateau 
{
public:
    Plateau(int width, int breadth) {}
    void setObstacles(std::vector<Obstacle> obstacles);
};

class MarsRover 
{
public:
    MarsRover(Plateau plateau, Direction direction, Coordinates startingPosition) {}

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
