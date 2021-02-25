#include <unistd.h>

int main()
{
	char str[11] = "0123456789";
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	while(i >= 0)
	{
		write( 1, &str[i], 1);
		i--;
	}
	write( 1, "\n", 1);
	return (0);
}