int ft_iterative_power(int nb, int power) 
{ 
    int res = 1;
    int k;
    int i;

    i = 1;
    k = nb;
    if (power < 0)
        return(nb = 0);
    else if (power == 0)
        return (nb = 1);
    else
        while (i < power) 
        { 
            nb = nb * k;
            i++; 
        } 
    return (nb); 
} 