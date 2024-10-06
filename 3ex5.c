#include <stdio.h>

int main() {
    int runner1Coord, runner1Step, runner2Coord, runner2Step;
    
    scanf("%d %d %d %d", &runner1Coord, &runner1Step, &runner2Coord, &runner2Step);

    if ((runner1Step > runner2Step && runner1Coord > runner2Coord) ||
        (runner1Step < runner2Step && runner1Coord < runner2Coord) ||
        (runner1Step == runner2Step)) {
        printf("NEVER\n");
        return 0;
    }

    int distance = runner2Coord - runner1Coord;
    int relativeSpeed = runner1Step - runner2Step;

    if (distance % relativeSpeed == 0 && (distance / relativeSpeed) > 0) {
        int time = distance / relativeSpeed;
        int meetCoord = runner1Coord + runner1Step * time;
        printf("%d %d\n", meetCoord, time);
    } else {
        printf("NEVER\n");
    }

    return 0;
}

