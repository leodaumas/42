#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}


int main(int argc, char *argv[]) {

    while(*argv)
        argv++;

    while(--argv && *argv && argc > 1) // compare argc
    {
        ft_putstr(*argv);
        ft_putstr("\n");
    }
    return 0;
}