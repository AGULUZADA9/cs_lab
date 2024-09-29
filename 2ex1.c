#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    long long product = 1;  
    int element;
   
    scanf("%d", &n);

    
    for (i = 1; i <= n; i++) {
        element = 3 * i - 1;  
        sum += element;       
        product *= element;   
    }

   
    printf("Sum of the first %d elements: %d\n", n, sum);
    printf("Product of the first %d elements: %lld\n", n, product);

    return 0;
}
 

 




