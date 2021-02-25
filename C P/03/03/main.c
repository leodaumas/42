#include <stdio.h>
#include <string.h>
#include "ft_strncat.c"

int main()
{
	char s1[100] = "Hello There";
	char s2[100] = "Hello There";
	char s3[100] = "No, Does not!";

	printf("%s\n", ft_strncat(s1,s3, 2));
    printf("%s\n\n", strncat(s2,s3, 2));

    char s4[100] = "Hello There";
	char s5[100] = "Hello There";
	char s6[100] = "No, Does nt!";

	printf("%s\n", ft_strncat(s4,s6, 20));
    printf("%s\n\n", strncat(s5,s6, 20));

    char s7[100] = "toto ";
	char s8[100] = "42dfgd";
	char s9[100] = " l33r";
	

	printf("%s\n", ft_strncat(s7,s7, 5));
//   printf("%s\n\n", strncat(s7,s7, 3));

	printf("%s\n", ft_strncat(s8,s9, 10));
 //   printf("%s\n\n", strncat(s8,s8, 1));
}


/*

toto $
 toto $
 toto $
 toto $
 42dfgd l33r$
-42dfgd l33r$
-42dfgd l33r$
-42dfgd l33r$
- pouic$
- pouic$
- pouic$
+42dfgdl33r l33r$
+42dfgdl3 l33r$
+42dfgdl33r l33r$
  pouic$
+pouic pouic$
+po pouic$
+pouic pouic$

*/