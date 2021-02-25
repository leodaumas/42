#include <string.h>
#include <stdio.h>
#include "ft_strncmp.c"

int main()
{
	char s1[10] = "abCde";
	char s2[10] = "abcdA";
	char s3[10] = "";

	printf("%s %s %d %d\n", s1, s2, strncmp(s1,s2, 1), ft_strncmp(s1,s2, 1));
	printf("%s %s %d %d\n", s2, s1, strncmp(s2,s1, 3), ft_strncmp(s2,s1, 3));
	printf("%s %s %d %d\n", s1, s3, strncmp(s1,s3, 10), ft_strncmp(s1,s3, 10));
	printf("%s %s %d %d\n", s3, s3, strncmp(s3,s3, 10), ft_strncmp(s3,s3, 10));
	printf("%s %s %d %d\n", s3, s2, strncmp(s3,s2, 0), ft_strncmp(s3,s2, 0));
}