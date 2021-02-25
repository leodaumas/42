void	ft_minuscule(char *str, int *temp)
{
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = (str[0] - 32);
		temp = 0;
	}
}

char	*ft_strcapitalize(char *str)
{
	int index;
	int temp;

	index = 0;
	temp = 1;
	while (str[index] != '\0')
	{
		if (temp == 1)
			ft_minuscule(&str[index], &temp);
		else
		{
			if (str[index] >= 'A' && str[index] <= 'Z')
				str[index] = (str[index] + 32);
		}
		if ((str[index] >= 'A' && str[index] <= 'Z') ||
		(str[index] >= 'a' && str[index] <= 'z') ||
		(str[index] >= '0' && str[index] <= '9'))
			temp = 0;
		else
			temp = 1;
		index++;
	}
	return (str);
}