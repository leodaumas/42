#include <stdio.h>

int		ft_len(int *nb)
{
	int i;

	i = 0;
	while(*nb)
	{
		i++;
		nb++;
	}
	return (i);
}
/*
char	ft_itoa(int nbr)
{
	int i;
	int size;

}
*/
int		main()
{
	int i = 123456789;
	char *str;
	int x;
	
	x = 0;
//	str = ft_itoa(i);

	int f = ft_len(i);
	printf("%d", f);

	return (0);
}