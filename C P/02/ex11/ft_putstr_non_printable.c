void			ft_putchar(char c)
{
	write(1, &c, 1);
}

static void		print_hex(int np)
{
	char *hex;

	hex = "0123456789abcdef";
	if (np > 16)
	{
		print_hex(np / 10);
		print_hex(np % 10);
	}
	else
		ft_putchar(hex[np]);
}

void			ft_putstr_non_printable(char *str)
{
	int		index;
	char	bar;

	bar = 92;
	index = 0;
	while (str[index] != '\0')
	{
		if (!(str[index] > 31 && str[index] < 127))
		{
			ft_putchar(bar);
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