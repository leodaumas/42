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

char *ft_strcat(char *dest, char *src)
{

    unsigned int dest_len = ft_strlen(dest);
    unsigned int i;
    unsigned int src_len = ft_strlen(src);

    i = 0;
    while (src[i] != '\0')
    {
        dest[dest_len + i] = src[i];
        i++;
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

	printf("%s\n", ft_strcat(s1,s3));
    printf("%s\n\n", strcat(s2,s3));

    char s4[20] = "Hello There";
	char s5[20] = "Hello There";
	char s6[20] = "No, Does nt!";

	printf("%s\n", ft_strcat(s4,s6));
    printf("%s\n", strcat(s5,s6));
}
