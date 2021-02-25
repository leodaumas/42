#include <stdio.h>

enum e_list //enum return int, if you use a char, it will return it ascii value  
{
    val1 = 10,
    val2,
    val3,
    val4,
    val5,
};

int main(void)
{
    printf("%d\n", val5);
    return (0);
}