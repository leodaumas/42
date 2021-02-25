int my_strcmp(char *strg1, char *strg2)
{
    while( ( *strg1 != '\0' && *strg2 != '\0' ) && *strg1 == *strg2 )
    {
        strg1++;
        strg2++;
    }

    if(*strg1 == *strg2)
    {
        return 0; // strings are identical
    }

    else
    {
        return *strg1 - *strg2;
    }
}

#include <stdio.h>

int main()
{
	char s1[100] = "Hello";
	char s2[100] = "Hello";
	char s3[100] = "no";

	printf("%d", my_strcmp(s1,s3));
	printf("%d", (*s1-*s3));
}
