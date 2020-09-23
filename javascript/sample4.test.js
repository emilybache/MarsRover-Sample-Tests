import Plateau from "./plateau";
import MarsRover from "./mars-rover";

describe('Mars Rover', function() {

    it('can follow instructions', function () {
        var plateau = new Plateau(5, 5);
        var rover = new MarsRover(plateau, [1, 2], "N");

        rover.turnLeft();
        expect(rover.heading).toEqual("W");
        rover.turnLeft();
        expect(rover.heading).toEqual("S");
        rover.turnLeft();
        expect(rover.heading).toEqual("E");
        rover.forward();
        expect(rover.position).toEqual([2, 2]);
        rover.backward();
        expect(rover.position).toEqual([1, 2]);
        rover.turnRight();
        expect(rover.position).toEqual([1, 2]);
        expect(rover.heading).toEqual("S");

    });

});