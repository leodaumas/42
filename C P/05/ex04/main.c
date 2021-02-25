#include<stdio.h>
#include "ft_fibonacci.c"

int main()    
{  
    int x, y;

    x = -2;
    y = 12;
    while(x++ <= y)
    {
        printf(" %d",ft_fibonacci(x));
    }
  return 0;  
 }  