#include <stdio.h>
 
// Naive recursive solution to calculate `pow(x, n)`
// using divide-and-conquer
int power(int x, unsigned n)
{
    // base condition
    if (n == 0) {
        return 1;
    }
 
    if (n & 1) { // if `n` is odd
        return x * power(x, n / 2) * power(x, n / 2);
    }
 
    // otherwise, `n` is even
    return power(x, n / 2) * power(x, n / 2);
}
 
int main(void)
{
    int x = 2;
    unsigned n = 10;
 
    printf("pow(%d,%d) = %d\n", x, n, power(x, n));
     printf("(1) Should Return: %d\n", power(0, 0));
    printf("(32) Should Return: %d\n", power(2, 5));
    printf("(27) Should Return: %d\n", power(2, 3));
    return 0;
}