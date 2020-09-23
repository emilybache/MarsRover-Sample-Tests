'use strict';

import Plateau from "./plateau";
import MarsRover from "./mars-rover";

describe('Mars Rover', function() {

  it('can rotate left', function () {
    var plateau = new Plateau(5, 5);
    var rover = new MarsRover(plateau, [1, 2], "N");
    rover.turnLeft();
    expect(rover.position).toEqual([1, 2]);
    expect(rover.heading).toEqual("W");
  });

});

