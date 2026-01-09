#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "robot_logic.h"

int main(void) {
    int distance;

    printf("Obstacle Avoiding Car Logic Simulator\n");

    while (1) {
        printf("distance(cm) > ");
        if (scanf("%d", &distance) != 1) break;

        Action act = decide_action_cm(distance);
        printf("Action: %s\n\n", action_to_string(act));
    }

    return 0;
}
