#include <stdio.h>

void    swap(int *a, int *b)
{
        int             temp;

        temp = *a;
        *a = *b;
        *b = temp;
}

void    ft_sort_int_tab(int *tab, int size)
{
        int             i;
        int             j;
        int             t;

        i = 0;
        j = 1;
        while (i < size - 1)
        {
                t = tab[i];
                while (j < size)
                {
                        if (tab[j] < t)
                        {
                                t = tab[j];
                printf("Before: i[%d]: %d s[%d]:%d\n", i, tab[i], j, tab[j]);
                                swap(&tab[i], &tab[j]);
                printf("Ater: i[%d]: %d s[%d]:%d\n\n", i, tab[i], j, tab[j]);
                        }
                        j++;
                }
                i++;
                j = i + 1;
        }
}

#include <stdio.h>

int main()
{
	int tab[] = {3, 2, 50, 4, 1};
	int size = 5;

	ft_sort_int_tab(tab, size);
}
//maybe code should be checked

