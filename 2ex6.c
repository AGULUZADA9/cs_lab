#include <stdio.h>

int main() {
     int num, result =0, k =1;

    scanf("%d", &num);

    int negative = (num < 0);
    if (negative) {
        num = -num;
    }

    
    while (num > 0) {
        int digit = num % 10;  
        if (digit != 0) {
            result += digit * k;  
           k *= 10;  
        }
        num /= 10;  
    }

    if (negative) {
        printf("-%d\n", result);
    } else {
        printf("%d\n", result);
    }

    return 0;
}
