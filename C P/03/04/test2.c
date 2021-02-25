int stringStr(const char *hay, const char *needle)
{
    const char *hstart = hay;
    const char *nstart = needle;

    do {
        if (*hay == *needle)
            hay++, needle++;
        else
            needle = nstart, hay++;
    } while (*needle && *hay);

    return !*needle ? (hay - hstart) - (needle - nstart) : -1;
}

#include <stdio.h>
#include <string.h>

int main()
{
	char s1[100] = "Hello There";
	char s2[100] = "Hello There";
	char s3[100] = "el";

	printf("%d\n", stringStr(s1,s3));
    printf("%s\n\n", strstr(s1,s3));

    char s4[20] = "Hello There";
	char s5[20] = "Hello There";
	char s6[20] = "Th";

	printf("%d\n", stringStr(s4,s6));
    printf("%s\n", strstr(s4,s6));
}
