import Plateau from "./plateau";
import MarsRover from "./mars-rover";

describe('Mars Rover', function() {

    it('can follow instructions', function () {
        var plateau = new Plateau(5, 5);
        var rover = new MarsRover(plateau, [1, 2], "N");

        var forward = Math.random()*10
        for (let i = 0; i < forward; i++) {
            rover.forward();
        }

        if (forward < 5) {
            expect(rover.status).toEqual("OK");
        } else {
            expect(rover.status).toEqual("NOK");
        }

    });

});