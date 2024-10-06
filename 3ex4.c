#include <stdio.h>

int main() {
    int n;
    float num, sum = 0.0;

    printf("Enter the number of floats: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%f", &num);
       sum = sum + num;
    }

    printf("Sum = %.1f\n", sum);

    return 0;
}
