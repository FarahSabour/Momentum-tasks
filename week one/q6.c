#include <stdio.h>
#include <stdlib.h>
int sum(int n ){

if(n==0){
    return(0);
}
else{
    return(n+=sum(n-1));
}


}

int main()
{
 int num;
 printf("\n enter any number : ");
 scanf("%d",&num);
   if(num<0){
        printf("no summation");
    }
    else{
int a=sum(num);
    printf("%d",a);
    }
    return 0;
}
