int ft_sqrt(int nb)
{
    int		i;

	i = 1;
	if (nb <= 0)
		return (0);
	if (nb >= 1 && nb <= 2147395600)
	{
		while (i * i < nb)
			++i;
		if (i * i == nb)
			return (i);
	}
	return (0);
}