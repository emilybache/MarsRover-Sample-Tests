package marsrover

type Plateau struct {
	maxX int
	maxY int
}

type Coordinates struct {
	x int
	y int
}

type Direction int

const (
	N Direction = iota
	E
	S
	W
	)
func (d Direction) String() string {
	return [...]string{"N", "E", "S", "W"}[d]
}

type Obstacle struct {

}

type MarsRover struct {
	plateau Plateau
	heading Direction
	position Coordinates
}

func (r MarsRover) turnLeft() {

}

func (r MarsRover) currentLocation() interface{} {
	return ""
}