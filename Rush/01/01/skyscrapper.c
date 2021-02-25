#include <stdio.h>
#include <unistd.h>
#include <stdlib.h> 

int    ft_str_is_numeric(char *str)
{
    int index = 0;
    int result = 0;
    
    if(str[index] == '\0')
    {
        result = 1;
        return(result);
    }
     while(str[index] != '\0')
     {
         if(str[index] >= 0 && str[index] <= 9)
        {
         result = 1;
        }
        else
        {
        result = 0;
        break;
        }
        index++;
    }
    return(result);
}

int ft_possible_values(int *value)
{
    int x, y, nvalues;

    x = 1;

    return(x);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void combinationUtil(int arr[], int data[], int start, int end, 
					int index, int r); 

void printCombination(int arr[], int n, int r) 
{ 
	int data[r]; 

	combinationUtil(arr, data, 0, n-1, 0, r); 
} 

void combinationUtil(int arr[], int data[], int start, int end, 
					int index, int r) 
{
	if (index == r) 
	{
		int j = 0;
		while(j<r)
		{
            ft_putchar((data[j] + '0'));
            ft_putchar(' ');
			j++;
		} 
		ft_putchar('\n');
		return; 
	} 
	int i = start;
	while(i<=end && end-i+1 >= r-index)
	{
		data[index] = arr[i]; 
		combinationUtil(arr, data, i+1, end, index+1, r);
		i++;
	}
}


int main(int argc, char **argv)
{
    (void) argc;
    (void) argv;
    int i, qt_args;

    qt_args = 18; // n de args - a.out -
    i = 1;
    while(argv[i] != NULL)
    {
    int arr[] = {1, 2, 3, 4};
	int r =  strtol(argv[i], &argv[i], qt_args); //use function to parse
	int n = sizeof(arr)/sizeof(arr[0]); //lembrar de remover sizeof
	printCombination(arr, n, r); 
     printf("\n");
     i++;
    }

    return (0);
}
