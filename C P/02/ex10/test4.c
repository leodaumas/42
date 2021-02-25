unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    char *destsize = dest + size;
    char *source = src;

    while (*source != 0 && dest < destsize)
        *dest++ = *source++;
    if (dest < destsize)      
        *dest = 0;
    if (size > 0)                    
        dest[-1] = 0;
    while (*source != 0)
        source++;
    return source - src;
}

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello there, Veus";
    char str1[] = "";
    char str3[] = "aa";
    char str2[] = "a";

    char dest[100] = "SALUT";
    char dest1[100] = "";


    printf("str: '%s' dest: '%s' length: %u strlcpy: %lu\n", str, dest, (ft_strlcpy(dest,str,3)), strlcpy(dest,str,3));
    printf("str: '%s' dest: '%s' length: %u strlcpy: %lu\n", str1, dest, (ft_strlcpy(dest,str1,3)), strlcpy(dest,str1,3));
    printf("str: '%s' dest: '%s' length: %u strlcpy: %lu\n", str3, dest1, (ft_strlcpy(dest1,str3,3)), strlcpy(dest1,str3,3));
    printf("str: '%s' dest: '%s' length: %u strlcpy: %lu\n", str2, dest, (ft_strlcpy(dest,str2,3)), strlcpy(dest,str2,3));
  //  printf("str: '%s' dest: '%s' length: %u strlcpy: %lu\n", str, dest, (ft_strlcpy(dest,str,3)), strlcpy(dest,str,3));
    
    return(0);
}