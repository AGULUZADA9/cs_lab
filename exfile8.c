#include<stdio.h>

int main(){
int a,b,c;
printf("enter the lengths of the three stickd");
scanf("%d%d%d",&a,&b,&c );

if(a+b>c && b+c>a && c+a>b)
{
    printf("the triangle is possible\n");
}
else
{
    printf("the triangle is not possible\n");
}
return 0;
}
