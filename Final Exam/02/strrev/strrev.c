char	*ft_strrev(char *str)
{
	int		count;
	int		i;
	char	c;

	count = 0;
	while (str[count] != '\0')
		count++;
	count = count - 1;
	i = 0;
	while (i < ((count + 1) / 2))
	{
		c = str[i];
		str[i] = str[count - i];
		str[count - i] = c;
		i++;
	}
	return (str);
}
#include <stdio.h>

int main()
{
	char c[100] = "olaa";
	char *x;
	int i;

	x = ft_strrev(c);
	printf("%s", x);
/*	while(i < 10)
	{
		printf("%c")
		i++;
	}*/
}