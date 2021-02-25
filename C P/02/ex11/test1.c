#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	print_hex(int np)
{
	char	*hex;
//	printf("\n%d\n", np); AS INT IT WILL GO TO THE 10TH CHAR IN hex, SO IT WILL BE a
	hex = "0123456789abcdef";
	if (np > 16)
	{
		print_hex(np / 10);
		print_hex(np % 10);
	}
	else
		ft_putchar(hex[np]);
}

void    ft_putstr_non_printable(char *str)
{
    int index = 0;
 
     while(str[index] != '\0')
     {
         if(!(str[index] >= 31 && str[index] <= 127))
        {
			ft_putchar('\\');
			if (str[index] < 16)
				ft_putchar('0');
			print_hex(str[index]);
        }
        else
        {
			ft_putchar(str[index]);
		}
        index++;
    }
}

int main()
{
	char str[100] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(str);
}