#include <stdio.h>
#include <stdlib.h>

int main()
{
 int number,n;
 printf("\n enter any number : ");
 scanf(" %d",&number);
  printf("\n enter the bit to be cleared : ");
  scanf("%d ",&n);
  number&=~(1<<n);
  printf("\n the number after clearing the bit number %d is %d ",n,number);
    return 0;
}