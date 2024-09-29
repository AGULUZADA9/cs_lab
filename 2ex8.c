#include <stdio.h>

int main() {
    int n, f0 = 0, f1 = 1, next, i;

    // Input n
    scanf("%d", &n);

    if (n == 0) {
        printf("%d\n", f0);
        return 0;
    } else if (n == 1) {
        printf("%d\n", f1);
        return 0;
    }

    // Calculate Fibonacci for n > 1
    for (i = 2; i <= n; i++) {
        next = f0 + f1;
        f0 = f1;
        f1 = next;
    }

    // Output result
    printf("%d\n", f1);

    return 0;
}
