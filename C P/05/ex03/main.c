#include <stdio.h> 
#include "ft_recursive_power.c"

int main(void)
{
  printf("Should return 1 and is %d\n", ft_recursive_power(2, 0)); 
  printf("Should resurn 0 and is %d\n", ft_recursive_power(2, -1)); 
  printf("Should return 0 and is %d\n", ft_recursive_power(-527, -1287)); 
  printf("Should return 1 and is %d\n", ft_recursive_power(0, 0)); 
  printf("Should return 1 and is %d\n", ft_recursive_power(3512, 0)); 
  printf("Should return -1990 and is %d\n", ft_recursive_power(-1990, 1)); 
  printf("Should return 1 and is %d\n", ft_recursive_power(1, 2)); 
  printf("Should return 64 and is %d\n", ft_recursive_power(4, 3));
  printf("Should return 2401 and is %d\n", ft_recursive_power(7, 4)); 
  printf("Should resurn -1 and is %d\n", ft_recursive_power(-1, 5)); 
  printf("Should return 1679616 and is %d\n", ft_recursive_power(-6, 8)); 
  printf("Should return -19683 and is %d\n", ft_recursive_power(-3, 9)); 
  printf("Should return 1024 and is %d\n", ft_recursive_power(-2, 10));
    return 0;
}