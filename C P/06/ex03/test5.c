#include <unistd.h>

void        ft_putchar(char ch)
{
    write(1, &ch, 1);
}

void        ft_print_params(int argc, char *argv)
{
    int i;

    i = 0;
    while (i < argc)
    {
        while (argv[i] != '\0')
        {
            ft_putchar(argv[i]);
            i++;
        }
        i++;
    }
}

int         main(int argc, char **argv)
{
    int i;

    i = 1;
    while (i < argc)
    {
        ft_print_params(argc, argv[i]);
        ft_putchar('\n');
        i++;
    }
    return (0);
}