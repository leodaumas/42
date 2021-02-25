#include <stdio.h>

void    ft_swap(int *a, int *b)
{
        int t;

        t = *a;
        *a = *b;
        *b = t;
}

void    ft_rev_int_tab(int *tab, int size)
{
        int i;

        i = 0;
        while (i <= size / 2)
        {
                ft_swap(&tab[i], &tab[size - i - 1]);
                i++;
        }
}

int main()
{
  int t[4] = {1, 2, 3, 4};
  int x = 4;

  printf("%d", ft_rev_int_tab(t, x));
  return 0;
}
