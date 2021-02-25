#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
    {
    	write(1, str, 1);
	    str++;
    }
}

int ft_strcmp(char *s1, char *s2)
{
    while(*s1 && *s2 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }

    return (*s1 - *s2);
}

void	ft_swap(char **a, char **b)
{
	char *i;

	i = *a;
	*a = *b;
	*b = i;
}

void    ft_sort_argc(char *tab[], int size)
{
    int i;
    int j;
    int *temp;

    i = 1;
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (ft_strcmp(tab[j], tab[i]) < 0)
            {
                ft_swap(&tab[i], &tab[j]);
            }
            j++;
        }
        i++;
    }
}

int main(int argc, char *argv[]) 
{

    int i;

    ft_sort_argc(argv, argc);
    i = 1;
    while (i < argc)
    {
        ft_putstr(argv[i]);
        ft_putstr("\n");
        i++;
    }
    return (0);
}
