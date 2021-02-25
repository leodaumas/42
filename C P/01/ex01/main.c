#include <stdio.h>
#include "ft_ultimate_ft.c"

int main()
{
int i;
  int a;
int *nbr1;
int **nbr2;
int ***nbr3;
int ****nbr4;
int *****nbr5;
int ******nbr6;
int *******nbr7;
int ********nbr8;
int *********nbr;

a = 50;
nbr1 = &a;
nbr2 = &nbr1;
nbr3 = &nbr2;
nbr4 = &nbr3;
nbr5 = &nbr4;
nbr6 = &nbr5;
nbr7 = &nbr6;
nbr8 = &nbr7;
nbr = &nbr8;

  printf("nbr before: %d\n", *********nbr);

  ft_ultimate_ft(&nbr8);
  printf("a: %d\n", a);

  return 0;
}
//need some work