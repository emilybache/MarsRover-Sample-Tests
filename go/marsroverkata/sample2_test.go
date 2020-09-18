package marsrover

import (
	"testing"
	"github.com/stretchr/testify/assert"
)

func TestReceiveSingleCommandShouldMove(t *testing.T) {
	plateau := Plateau{maxX: 5, maxY: 5}
	startingPosition := Coordinates{1,9}
	obstacles := []Obstacle{{Coordinates{2, 10}}}
	plateau.obstacles = obstacles
	marsRover := MarsRover{plateau: plateau, heading: N, position: startingPosition}

	commands := []Command{B}
	marsRover.acceptCommands(commands)

	expectedPosition := Coordinates{1,8}
	assert.Equal(t, expectedPosition.x, marsRover.coordinates().x)
	assert.Equal(t, expectedPosition.y, marsRover.coordinates().y)
}