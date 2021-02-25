#include <string.h>
#include <stdio.h>
#include "ft_strcmp.c"

int main()
{
	char s1[10] = "abCde";
	char s2[10] = "abcdA";
	char s4[10] = "abcdA";
	char s3[10] = "";

	printf("%s %s %d %d\n", s1, s2, strcmp(s1,s2), ft_strcmp(s1,s2));
	printf("%s %s %d %d\n", s2, s1, strcmp(s2,s1), ft_strcmp(s2,s1));
	printf("%s %s %d %d\n", s1, s3, strcmp(s1,s3), ft_strcmp(s1,s3));
	printf("%s %s %d %d\n", s3, s3, strcmp(s3,s3), ft_strcmp(s3,s3));
	printf("%s %s %d %d\n", s3, s2, strcmp(s3,s2), ft_strcmp(s3,s2));
	printf("%s %s %d %d\n", s2, s4, strcmp(s2,s4), ft_strcmp(s2,s4));

}