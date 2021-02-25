#include <stdio.h>
#include <unistd.h>
#include "ft_putstr_non_printable.c"

int main()
{
	char src[100];
	int i = 0;
	while(i++ < 31 )
	{
		src[i] = (i + '0');
	}
	if(i == 31)
	{
		i = 125;
		src[31] = (i + '0');
	}

	char str[100] = "Coucou\ntu vas bien ?";

//	ft_putstr_non_printable(str);
	printf("\n\n");
	ft_putstr_non_printable(src);

}