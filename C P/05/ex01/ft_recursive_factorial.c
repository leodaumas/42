int ft_recursive_factorial( int nb )
{
  int product = 1;
  int j;

    if(nb < 0)
    {
        return 0;
    }

    j = 1;
    if(j<=nb)
    {
        product = nb * (ft_recursive_factorial(nb-1));
        j++;
    }
  return product;
}