#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int size_dest;
	int size_src;
	int index;

	index = 0;
	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	while (src[index] != '\0')
	{
		dest[size_dest + index] = src[index];
		index++;
	}
	dest[size_dest + index] = '\0';
	return (dest);
}

int		check_len(int size, char **strs, char *sep)
{
	int i;
	int len;

	len = 0;
	i = -1;
	while (++i < size)
	{
		if (i == size - 1)
			len += ft_strlen(strs[i]);
		else
		{
			len += ft_strlen(strs[i]);
			len += ft_strlen(sep);
		}
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*res;
	int		len;
	int		res_len;

	i = -1;
	len = check_len(size, strs, sep);
	if (!(res = malloc(sizeof(char) * len)))
		return (NULL);
	i = -1;
	while (++i < size)
	{
		if (i == size - 1)
			res = ft_strcat(res, strs[i]);
		else
		{
			res = ft_strcat(res, strs[i]);
			res = ft_strcat(res, sep);
		}
	}
	res_len = ft_strlen(res);
	res[res_len] = '\0';
	return (res);
}

	int	main()
	{
	int index;
	char **strs;
	char *separator;
	char *result;

	strs = (char **)malloc(4 * sizeof(strs));
	strs[0] = "Hi,";
	strs[1] = "how";
	strs[2] = "are";
	strs[3] = "You?";
	separator = "...";
	index = 4;

	printf("%s", ft_strjoin(index, strs, separator));
	free(strs);
	}