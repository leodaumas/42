int ft_iterative_factorial( int nb )
{
    int product = 1;
    int j;

    if(nb < 0)
    {
        return 0;
    }

    j = 1;
    while (j<=nb)
    {
        product *= j;
        j++; 
    }   
    return product;
}