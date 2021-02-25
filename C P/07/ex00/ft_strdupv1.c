#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int     ft_strlen(char *src)
{
    int i;

    i = 0;
    while (*src++)
    {
        i++;
    }
    return(i);
}

char    *ft_strcpy(char *dest, char *src )
{
    int src_size;

    src_size = ft_strlen(src);
    while(*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return (dest);
}

char    *ft_strdup(char *src)
{
    int src_size;
    int dup_size;
    char *dup;

    src_size = ft_strlen(src);
    dup = (char *)malloc(sizeof(char)*src_size + 1);
    if (dup == NULL)
        return ((char *)NULL);
    ft_strcpy(dup, src);
    dup_size = ft_strlen(dup);

    return (dup);
}

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    char c[100] = "hello 42";
    char *dup;

    printf("%s",(dup = ft_strdup(c)));
    printf("\nOriginal strdup: %s",(dup = strdup(c)));
}


/*
-hello 42^P$
-Xxiao 42^P$
-NZUQUU42^P$
+hello 42$
+Xxia$
+NZUQUU$
 0m6IqZiJsaOpC5Rtcy26nVdCSYVI3IjAgdukQ3IrNV$
 Mu$
 i4Pnn1vM4vEaVT7mxKHdDcRMntO9bVAAADPEDm5pQNiHR$
 U13GD1ZIsD1ivY3MuPsoY$
 W8YDgD4rj1nh8ku381bEvPcqEZ$
-DdLuf41HNbYkYaLuqBPUvPcqEZ$
+DdLuf41HNbYkYaLuqBPU$
*/