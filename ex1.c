#include <stdio.h>

int main() {
   float x,y;
       scanf("%f", &x);
    if (x > 0) {
        y = x*x - 2*x + 3;
    } 
    else if (x == 0) {
        y = x - 5;
    } 
    else {
        y = x*x + 2*x - 3;
    }

   printf("%f",y);

    return 0;
}
