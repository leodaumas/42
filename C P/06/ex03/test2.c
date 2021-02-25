#include <stdio.h>

void	swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int t;

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
				swap(&tab[i], &tab[j]);
                printf("%d\n",tab[j]);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}

int main(int argc, char **argv)
{
	int tab[] = {3, 2, 5, 4, 1};
	int size = 5;

	ft_sort_int_tab(tab, size);
}

