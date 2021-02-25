#include <stdio.h> 
#include "ft_iterative_power.c"

int main() 
{ 
    int nb = 2; 
    int power = 5; 
    int nb1 = 0; 
  
  printf("Should return positive and is %d\n", ft_iterative_power(2, 5)); 
  printf("Should resurn 0 and is %d\n", ft_iterative_power(2, -1)); 
  printf("Should return 0 and is %d\n", ft_iterative_power(-527, -1287)); 
  printf("Should return 1 and is %d\n", ft_iterative_power(0, 0)); 
  printf("Should return 3512 and is %d\n", ft_iterative_power(3512, 0)); 
  printf("Should return -1990 and is %d\n", ft_iterative_power(-1990, 1)); 
  printf("Should return 1 and is %d\n", ft_iterative_power(1, 2)); 
  printf("Should return 64 and is %d\n", ft_iterative_power(4, 3));
  printf("Should return 2401 and is %d\n", ft_iterative_power(7, 4)); 
  printf("Should resurn -1 and is %d\n", ft_iterative_power(-1, 5)); 
  printf("Should return 1679616 and is %d\n", ft_iterative_power(-6, 8)); 
  printf("Should return -19683 and is %d\n", ft_iterative_power(-3, 9)); 
  printf("Should return 1024 and is %d\n", ft_iterative_power(-2, 10));

  //  printf("Power is %d\n", ft_iterative_power(0, 1));
    return 0; 
}