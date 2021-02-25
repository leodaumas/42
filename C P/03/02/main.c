#include <stdio.h>
#include <string.h>
#include "ft_strcat.c"

int main()
{
	char s1[100] = "Hello There";
	char s2[100] = "Hello There";
	char s3[100] = "No, Does not!";

	printf("%s\n", ft_strcat(s1,s3));
    printf("%s\n\n", strcat(s2,s3));

    char s4[100] = "Hello There";
	char s5[100] = "Hello There";
	char s6[100] = "No, Does nt!";

	printf("%s\n", ft_strcat(s4,s6));
    printf("%s\n", strcat(s5,s6));
}
