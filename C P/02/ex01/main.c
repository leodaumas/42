#include<stdio.h>
#include "ft_strncpy.c"

int main()
{
    char src[20] = "source";
    char dest[20] = "dest";
    int n = 4;
    
    ft_strncpy(dest, src, n);

    //printf("%s\n\n", ft_strncpy(dest, src, n));

    printf("Source = %s\n", src);
    printf("Destination = %s\n", dest);

    return 0;
}