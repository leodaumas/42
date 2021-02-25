/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaumas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 11:29:32 by ldaumas           #+#    #+#             */
/*   Updated: 2021/02/12 15:00:04 by ldaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
    if(ft_strlen(src) < ft_strlen(dest))
    {
        int x;
        x = ft_strlen(dest);
        while(i < x)
        {
            dest[i] = '\0';
            i++;
        }
    }

	return (dest);
}
