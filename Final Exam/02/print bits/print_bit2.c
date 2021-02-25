#include <unistd.h>

void	print_bits(unsigned char bit)
{
	int	i;

	i = 128;
	while (bit >= 0 && i)
	{
		if(bit / i)
			write(1, "1", 1);
		else
			write(1, "0", 1);

//		if(bit / i)
//			bit = bit - i;
//		else
//			bit = 0;
		(bit / i) ? bit -= i : 0;
		i = i / 2;
	}
}

void	print_bits2(unsigned char bit)
{
	int	i = 256;
	while (i >>= 1)
		if(bit & i)
		{
			write( 1, "1", 1);
		}
		else
		{
			write( 1, "0", 1);
		}
//		(bit & i) ? write(1, "1", 1) : write(1, "0", 1);
}

int		main(void)
{
	int n = 141;
	print_bits(n);
	write(1, "\n", 1);
	print_bits2(n);
}
/*
00001011

1
2
1 * 2 ^ 0
1 * 2^3 = 8*/