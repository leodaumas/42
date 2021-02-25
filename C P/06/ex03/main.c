#include <unistd.h>
#include <stdio.h>
#include "ft_sort_params.c"

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
