#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

int		ft_hidenp(char *s1, char *s2)
{
	int i;
	int j;
	int k;
	int temp[256];
	char new_str[256];

	i = 0;
	while (i < 256)
	{
		temp[i] = 0;
		i++;
	}


	i = 0;
	j = 0;
	k = 0;
	while(s1[i])
	{
		while(s2[j])
		{
			if (s1[i] == s2[j] && temp[s1[i] - '0'] == 0 && i <= j)
			{
				new_str[k] = s1[i];
				temp[s1[i] - '0'] = 1;
				k++;
				break;
			}
			j++;
		}
		i++;
	}
	if (ft_strcmp(new_str, s1) == 0)
		return (1);
	else
		return (0);
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		if(ft_hidenp(av[1],av[2]) == 1)
			write( 1, "1", 1);
		else
			write( 1, "0", 1);
	}
	write( 1, "\n", 1);
	return (0);
}