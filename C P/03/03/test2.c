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

char *ft_strncat(char *dest, char *src, unsigned int n)
{

    unsigned int dest_len = ft_strlen(dest);
    unsigned int i;

    i = 0;
    while (i < n && src[i] != '\0')
    {
        i++;
        dest[dest_len + i] = src[i];
    }
    dest[dest_len + i] = '\0';
    return dest;
}

#include <stdio.h>
#include <string.h>

int main()
{
	char s1[100] = "Hello There";
	char s2[100] = "Hello There";
	char s3[100] = "No, Does not!";

	printf("%s\n", ft_strncat(s1,s3, 2));
    printf("%s\n\n", strncat(s2,s3, 2));

    char s4[20] = "Hello There";
	char s5[20] = "Hello There";
	char s6[20] = "No, Does nt!";

	printf("%s\n", ft_strncat(s4,s6, 20));
    printf("%s\n", strncat(s5,s6, 20));
}
