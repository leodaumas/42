#include<stdio.h>
#include "ft_strcpy.c"
#include <string.h>

int main()
{
    char src[20] = "source";
    char dest[20] = "destination";

    
    ft_strcpy(dest, src);

    printf("strcpy = %s\n", ft_strcpy(dest, src));
    printf("Source = %s\n", src);
    printf("Destination = %s\n", dest);

    return 0;
}

//Hello\0ation\0