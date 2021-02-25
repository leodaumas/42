#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int     ft_strlen(char *src)
{
    int i;

    i = 0;
    while (*src++)
    {
        i++;
    }
    return(i);
}

char    *ft_strcpy(char *src, char *dest)
{
    int src_size;

    src_size = ft_strlen(src);
    while(*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    return (dest);
}

char    *ft_strdup(char *src)
{
    int str_len;
    char *dup;

    str_len = ft_strlen(src);
    dup = (char *)malloc(sizeof(char)*str_len + 1);
    if(dup == NULL)
        return(NULL);
    ft_strcpy(src,dup);
    dup[str_len + 1] = '\0';

    return (dup);
}

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    char c[100] = "ola";
    char *dup;

    printf("%s",(dup = ft_strdup(c)));
    printf("\nOriginal strdup: %s",(dup = strdup(c)));
}