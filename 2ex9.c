#include <stdio.h>
#include <math.h>

int fact(int n) {
    int f = 1, i;
    for (i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

int main() {
    float x, sum = 0;
    int n, i;

    scanf("%f %d", &x, &n);

    for (i = 0; i < n; i++) {
        float term = (i % 2 == 0 ? 1 : -1) * powf(x, 2 * i + 1) / fact(2 * i + 1);
        sum += term;
    }

    printf("%.3f\n", sum);

    return 0;
}


