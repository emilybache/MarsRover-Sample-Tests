package marsrover

import (
	"github.com/stretchr/testify/assert"
	"testing"
)

func TestCanMove(t *testing.T) {
	plateau := Plateau{maxX: 5, maxY: 5}
	startingPosition := Coordinates{1,2}
	marsRover := MarsRover{plateau: plateau, heading: N, position: startingPosition}

	marsRover.turnLeft()
	assert.Equal(t, W, marsRover.heading)
	marsRover.turnLeft()
	assert.Equal(t, S, marsRover.heading)
	marsRover.turnLeft()
	assert.Equal(t, E, marsRover.heading)
	marsRover.forward()
	assert.Equal(t, "2 2 E", marsRover.currentLocation())
	marsRover.backward()
	assert.Equal(t, "1 2 E", marsRover.currentLocation())
	marsRover.turnRight()
	assert.Equal(t, "1 2 S", marsRover.currentLocation())
}
