#include <stdio.h>

int		powertwo(int nb)
{
	int i;
	int k;
	
	k = 0;
	i = 1;
	while(k < nb)
	{
		//printf("%d", i);
		if((i = i * 2) == nb)
			return(1);
		else
			k++;
	}
	return (0);
}
int main()
{
	int i;

	i = 128;
		printf("%d",powertwo(i));
	return (0);
}