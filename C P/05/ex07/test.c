int	ft_is_prime(int nb)
{
	int i;

	if (nb > 2147483647)
		return (0);
	else if (nb <= 1)
		return (0);
	else
	{
		i = 2;
		while (i <= nb / 2)
		{
			if (nb % i == 0)
			{
				return (0);
			}
			i++;
		}
		return (1);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	if (ft_is_prime(nb) == 0)
	{
		while (ft_is_prime(nb) == 0)
		{
			nb++;
		}
		return (nb);
	}
	return (0);
}