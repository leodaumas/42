#include <stdio.h>

typedef struct s_point
{
    int x;
    int y;
    char *name;
} s_point;

int main(void)
{
    s_point tab[3];
    int i;

    printf("%lu %lu\n", sizeof(i), sizeof(tab[0]));
    return(0);
}