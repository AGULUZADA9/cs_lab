#include <stdio.h>
#include <math.h>

int main() {
    float x0, y0, r, x, y, d;

    scanf("%f %f %f", &x0, &y0, &r);

    while (scanf("%f %f", &x, &y) != EOF) {
        d = sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));

        if (d < r) {
            printf("INSIDE\n");
        } else if (fabs(d - r) < 1e-6) {  
            printf("ON\n");
        } else {
            printf("OUTSIDE\n");
        }
    }

    return 0;
}
