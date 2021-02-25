int factorial( int N )
{
  int product = 1;
  int j;

  j = 1;
  while (j<=N)
  {
    product *= j;
    j++; 
  }   
  return product;
}

#include <stdio.h>

int main()
{
    printf("%d\n",factorial(5));

}