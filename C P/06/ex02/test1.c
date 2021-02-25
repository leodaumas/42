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

    int i;

    while (i < argc)
    i++;
    
    i = i - 1;
    while(i > 0)
    {
        ft_putstr(argv[i]);
        ft_putstr("\n");
        i--;
    }
    return 0;
}