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

char *ft_strstr(char *str, char *to_find)
{
    int find_len = ft_strlen(to_find);
    int i;
    int j;
    int h;

    if (*to_find == '\0')
        return(str);
        i = 0;
        while(str[i] != '\0')
        {
            j = 0;
            while(to_find[j] == str[i])
            {
                h = 0;
                while(str[i] != '\0')
                {
                    h++;
                    to_find[find_len + h] = str[i];
                    if(str[i+1] == '\0')
                        return (to_find);
                }
                j++;
            }
            i++;
        }
        return (0);
}

#include <stdio.h>
#include <string.h>

int main()
{
	char s1[100] = "Hello There";
	char s2[100] = "Hello There";
	char s3[100] = "el";

	printf("%s\n", ft_strstr(s1,s3));
    printf("%s\n\n", strstr(s1,s3));

    char s4[20] = "Hello There";
	char s5[20] = "Hello There";
	char s6[20] = "Th";

	printf("%s\n", ft_strstr(s4,s6));
    printf("%s\n", strstr(s4,s5));
}
