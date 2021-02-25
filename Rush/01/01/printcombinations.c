#include <unistd.h>
#include <stdio.h>

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

int main() 
{
	int arr[] = {1, 2, 3};
	int r = 2; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	printCombination(arr, n, r); 
} 

