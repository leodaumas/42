#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int *ft_range(int min, int max)
{
 int *arri;
 int *ptr_saved;
 int size;
 int i;

 size = max - min;
 if (size <= 0)
  return ((int *)NULL);
 arri = (int *)malloc(sizeof(int) * size);
 if (arri == NULL)
  return ((int *)NULL);
 ptr_saved = arri;
 while (min < max)
 {
  *arri = min;
  min++;
  arri++;
 }
 return (ptr_saved);
}

int main(int argc, char **argv)
{
 (void)argc;
 (void)argc;
 int x, y;

 x = 5;
 y = 10;
 int *ret = ft_range(x, y);
 for (int i = 0; i < (y - x); i++)
  printf(" %d ", ret[i]);
}