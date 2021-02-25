unsigned int    ft_strlcpy(char *dest, char *src, unsigned int dsize)
{
    unsigned int nleft;
    unsigned int result;

    result = (unsigned int)((src - '0') - 1);

    nleft = dsize;
    if (nleft != 0)
    {
        while (--nleft != 0)
        {
            if ((*dest++ = *src++) == '\0')
                break ;
        }
    }
    if (nleft == 0)
    {
        if (dsize != 0)
            *dest = '\0';
        while (src++)
            ;
    }
    return (result);
}

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello there, Veus";
    char dest[100] = "SALUT";
    printf("str: '%s' dest: '%s' length: %u strlcpy: %lu\n", str, dest, (ft_strlcpy(dest,str,3)), strlcpy(dest,str,3));
//    printf("str: '%s' dest: '%s' length: %d\n", str, dest, (ft_strlcpy(dest,str,22)));
//    printf("str: '%s' dest: '%s' length: %d\n", str, dest, (ft_strlcpy(dest,str,10)));
 //   printf("str: '%s' dest: '%s' length: %d\n", str, dest, (ft_strlcpy(dest,str,1)));
 //   printf("str: '%s' dest: '%s' length: %d\n", str, dest, (ft_strlcpy(dest,str,0)));

    return(0);
}