#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
                printf("%d ", tab[j]);
			}
			j++;
		}
		i++;
	}
}

int main()
{
	int tab[] = {3, 2, 5, 4, 1};
	int size = 5;
	ft_sort_int_tab(tab, size);
}