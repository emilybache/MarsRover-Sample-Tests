
import Plateau from "./plateau";
import MarsRover from "./mars-rover";

describe('Mars Rover', function() {

    it('can move backwards', function () {
        var plateau = new Plateau(5, 5);
        var rover = new MarsRover(plateau, [1, 2], "N");
        rover.backwards();
        expect(rover.position).toEqual([1, 1]);
        expect(rover.heading).toEqual("N");
    });

});