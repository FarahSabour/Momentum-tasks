#include <stdio.h>
#include <stdlib.h>

int main()
{
int x,y;
printf(" \n enter two numbers ");
scanf("%d" ,&x);
scanf("%d" ,&y);
int sum=x+y;
int sub=x-y;
int mul=x*y;
int div=x/y;
    printf(" \n %d + %d = %d " ,x ,y,sum);
    printf(" \n %d - %d = %d " ,x ,y,sub);
    printf(" \n %d * %d = %d " ,x ,y,mul);
    printf(" \n %d / %d = %d " ,x ,y,div);
    return 0;
}
