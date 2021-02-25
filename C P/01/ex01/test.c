#include <stdio.h>

int main()
{

int a;
int b;
int *nbr1;
int **nbr2;
int ***nbr3;
int ****nbr4;
int *****nbr5;
int ******nbr6;
int *******nbr7;
int ********nbr8;
int *********nbr;

b = 50;
//nbr = &b;
a = 42;
nbr1 = &a;
nbr2 = &nbr1;
nbr3 = &nbr2;
nbr4 = &nbr3;
nbr5 = &nbr4;
nbr6 = &nbr5;
nbr7 = &nbr6;
nbr8 = &nbr7;
nbr = &nbr8;

printf("%d", *********nbr);
  return 0;
}