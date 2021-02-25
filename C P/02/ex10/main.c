#include <stdio.h>
#include <string.h>
#include "ft_strlcpy.c"

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