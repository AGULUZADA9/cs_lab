#include <stdio.h>

int main() {
    int t1, t2, t3, t4, maxTime;

    printf("Enter the duration of the four tasks (t1 t2 t3 t4): ");
    scanf("%d %d %d %d", &t1, &t2, &t3, &t4);

    maxTime = t1;

    if (t2 > maxTime) {
        maxTime = t2;
    }
    if (t3 > maxTime) {
        maxTime = t3;
    }
    if (t4 > maxTime) {
        maxTime = t4;
    }

    printf("The time required to complete all jobs is: %d\n", maxTime);

    return 0;
}
