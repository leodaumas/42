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
        int s;

        s = size - 1;
        i = 0;
        while (i < (size / 2))
        {
                printf("Before: i[%d]: %d s[%d]:%d\n", i, tab[i], s, tab[s]);
                ft_swap(&tab[i], &tab[s]);
                printf("Ater: i[%d]: %d s[%d]:%d\n", i, tab[i], s, tab[s]);
                i++;
                s--;

        }
}

int main()
{
  int t[5] = {1, 2, 3, 4 , 5};
  int x = 5;

  ft_rev_int_tab(t, x);
  return 0;
}
