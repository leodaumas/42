int factorial( int N )
{
  int product = 1;
  int j;

    j = 1;
    if(j<=N)
    {
        product = N * (factorial(N-1));
        j++;
    }
  return product;
}

#include <stdio.h>

int main()
{
    printf("%d\n",factorial(5));

}