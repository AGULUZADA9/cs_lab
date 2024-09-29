#include<stdio.h>

int main(){ 
    int a, b, k, temp; 
    int sum = 0;
  
  
    scanf("%d %d %d", &a,&b,&k);
    

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i <= b; i++) {
        if (i % k == 0) {  
            sum += i;
        }
    }

    
    printf("Sum of elements divisible by %d in the range [%d, %d]: %d\n", k, a, b, sum);

    return 0;
}

   



