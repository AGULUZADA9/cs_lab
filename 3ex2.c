#include <stdio.h>

int main(){ 

    int a, b, k, sum = 0;

    printf("Enter a, b, and k: ");
    scanf("%d %d %d", &a, &b, &k);

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i <= b; i++) {
        if (i % k == 0) {
            sum = sum + i;
        }
    }

    printf("Sum = %d\n", sum);

    return 0;
}
