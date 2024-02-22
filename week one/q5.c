#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x,y,z;
  int max=0;
  printf("\n enter the first number : ");
  scanf("%d",&x);
  printf("\n enter the second number : ");
  scanf("%d",&y);
   printf("\n enter the third number : ");
  scanf("%d",&z);
  if(x>=y && x>=z){
   max=x;
  }
   else if(y>=x && y>=z){
    max=y;
   }

   else{
    max=z;
   }
    printf("max of three numbers is %d: " ,max);
    return 0;
}
