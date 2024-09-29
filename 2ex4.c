
#include <stdio.h>

int main() {
    int n;           
    float number, sum = 0.0;  

    scanf("%d", &n);


    while (n>0) {
        printf("Enter a floating-point number: ");
        scanf("%f", &number);  
        sum += number;
        n--;        
    }

    
    printf("The sum of the numbers is: %.1f\n", sum);

    return 0;
}
