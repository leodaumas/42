#include <stdio.h>
#include "ft_str_is_printable.c"

int main()
{
    char c[] = "ASODHOAISD";
    printf("It is printable: %d\n",ft_str_is_printable(c));
    char d[2] = "\n";
    printf("It isnt printable: %d\n",ft_str_is_printable(d));
    char x[2] = "";
    printf("It is empty: %d\n",ft_str_is_printable(x));
}