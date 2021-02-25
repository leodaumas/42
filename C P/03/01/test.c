int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    if (n == 0)
        return (0);
    while (n != 0)
    {
        if (*s1 != *s2++)
            return (*(unsigned char *)s1 - *(unsigned char *)(s2 - 1));
        if(*s1++ == '\0')
            break;
        n--;        
    }
    return (0);
}

#include <string.h>
#include <stdio.h>

int main()
{
	char s1[10] = "abcdCde";
	char s2[10] = "abcdA";
	char s3[10] = "";

	printf("%s %s %d %d\n", s1, s2, strncmp(s1,s2, 3), ft_strncmp(s1,s2, 3));
	printf("%s %s %d %d\n", s2, s1, strncmp(s2,s1, 3), ft_strncmp(s2,s1, 3));
	printf("%s %s %d %d\n", s1, s3, strncmp(s1,s3, 10), ft_strncmp(s1,s3, 10));
	printf("%s %s %d %d\n", s3, s3, strncmp(s3,s3, 10), ft_strncmp(s3,s3, 10));
	printf("%s %s %d %d\n", s3, s2, strncmp(s3,s2, 0), ft_strncmp(s3,s2, 0));
}