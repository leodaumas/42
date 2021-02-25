#include <stdio.h>

int main(int argc, char **argv)
{
    (void) argc;
    (void) argv;
    printf("Number of arguments: %d\n", argc);
    printf("Number of arguments: %s\n", argv[1]);

    char *str1 = argv[1];
    printf("%s\n", str1);

    char *str2 = argv[2];
    printf("%s\n", str2);

    char *str3 = argv[3];
    printf("%s\n", str3);

    char *str4 = argv[4];
    printf("%s\n", str4);
    
    char *str5 = argv[5];
    printf("%s\n", str5);
    
    return (0);
}

//gcc -Wall -Wextra -Werror argcargv.c && ./a.out lol 4 5 6