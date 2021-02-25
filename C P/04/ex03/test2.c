int ft_atoi(char *str)
{
    int res;
    int op;
    
    op = 1;
    res = 0;
	while (*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			op *= -1;
		str++;
	} 
    while (*str >= '0' && *str <= '9')
    {


        res *=10;
	    res += (int)(*str - '0');
    	str++;

    }
    return(res * op);
}


#include <stdio.h>
#include <unistd.h>

int main()
{
    char a[100] = "  *e ---+--+1234ab567";
	char b[100] = "   ---+---1234ab567";
	char c[100] = "   ---+--+1234";
    printf("%d\n",ft_atoi(a));
    printf("%d\n",ft_atoi(b));
    printf("%d\n",ft_atoi(c));
}

/*

nt	ft_atoi(char *str)
{
	int res;
	int op;

	op = 1;
	res = 0;
	while (*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			op *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res *= 10;
		res += (int)(*str - '0');
		str++;
	}
	return (res * op);
}

*/