int ft_is_prime(int nb) 
{
    int i;
    int a;
    int b;
    if (nb > 2147483647)
        return 0;
    else if(nb <= 1)
        return 0;
    else
        {
        i = 2;
        printf("\n%d <= (%d / 2) = %d\n", i, nb, nb / 2);
        while(i <= nb / 2)
        {
            if(nb % i == 0)
            {
        printf("\n%d mod 2 = %d\n", nb, nb % 2);
                return 0;
            }
            i++;
        }
        return 1;
    }
    return 0;
}