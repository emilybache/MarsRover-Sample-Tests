package marsrover

import (
	"testing"
	"github.com/stretchr/testify/assert"
)

func TestCanRotateLeft(t *testing.T) {
	plateau := Plateau{maxX: 5, maxY: 5}
	startingPosition := Coordinates{1,2}
	marsRover := MarsRover{plateau: plateau, heading: N, position: startingPosition}

	marsRover.turnLeft()

	assert.Equal(t, "1 2 W", marsRover.currentLocation())
}