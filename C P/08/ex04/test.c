#include <stdio.h>

typedef struct  s_point //use typedef to define a name to this struct(t_point)
{
    int x;
    int y;
} t_point;         //created a name for this struct called t_point

int main(void)
{
    t_point tab[3];  //using created name for struct but could alse be called like that -> struct s_point tab[3];

    tab->x = 1;             //different syntax
    (*tab).x = 1;           //to do the
    tab[0].x = 1;           //  same thing
    tab[0].y = 2;
    tab[1].x = 3;
    tab[1].y = 4;

    tab[2] = tab[0];
    printf("%d %d\n", tab[0].x, tab[0].y);
    return (0);
}