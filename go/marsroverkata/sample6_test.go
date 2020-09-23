package marsrover

import (
	"github.com/stretchr/testify/assert"
	"math/rand"
	"testing"
)

func TestReceiveCommands(t *testing.T) {
	plateau := Plateau{maxX: 5, maxY: 5}
	startingPosition := Coordinates{1,2}
	marsRover := MarsRover{plateau: plateau, heading: N, position: startingPosition}

	forward := rand.Intn(10)
	for i := 0; i < forward; i++ {
		marsRover.forward()
	}

	if forward < 5 {
		assert.Equal(t, marsRover.status, OK)
	} else {
		assert.Equal(t, marsRover.status, NOK)
	}
}
