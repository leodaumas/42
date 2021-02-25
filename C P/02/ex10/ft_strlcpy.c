int     ft_strlen(char *str)
{
        int i;

        i = 0;
        while (str[i] != '\0')
        {
                i++;
        }
        return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int index;
	int lsrc;
	int ldest;

	lsrc = ft_strlen(src);
	ldest = ft_strlen(dest);
	index = 0;
	if (size > 0)
	{
		while (src[index] != '\0')
		{
			if (index == size)
			{
				index--;
				break ;
			}
			dest[index] = src[index];
			index++;
		}
	if(lsrc < ldest)
    {
        while(index < ldest)
        {
            dest[index] = '\0';
            index++;
        }
    }

	}
	dest[index] = '\0';
	while (src[index] != '\0')
		index++;
	return (index);
}