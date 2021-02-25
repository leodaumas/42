#include <unistd.h>

void        ft_putchar(char ch)
{
    write(1, &ch, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int        ft_strcmp(char *s1, char *s2)
{
    while (s1 && s2 && (s1 == s2))
    {
        s1++;
        s2++;
    }
    return (s1 - s2);
}

void    ft_sort_argc(char *tab[], int size)
{
    int        i;
    int        j;
    char    *temp;

    i = 1;
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (ft_strcmp(tab[j], tab[i]) < 0)
            {
                *temp = *tab[i];
                *tab[i] = *tab[j];
                *tab[j] = *temp;
            }
            j++;
        }
        i++;
    }
}

int        main(int argc, char *argv[])
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