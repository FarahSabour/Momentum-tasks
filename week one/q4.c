#include <stdio.h>
#include <stdlib.h>
int fact(int n ){

if(n==1||n==0){
    return(1);
}
else{
    return(n*=fact(n-1));
}


}
int main()
{
 int num;
 printf("enter any number");
 scanf("%d" ,&num);
 if(num%2==0){
    printf("\n num is even");
 }
    else {
        printf("\n num is odd");
    }
    if(num <0){
        printf("no factorial");
    }
    else{
             int a=fact(num);
    printf("\n %d",a);
    }
    return 0;
}