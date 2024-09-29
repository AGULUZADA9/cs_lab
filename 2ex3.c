#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;

   
    scanf("%d", &n);

   
    for (i = 1; i <= n; i++) {
        sum += 1.0f / i;
    }

   
    printf("%.3f\n", sum);

    return 0;
}



