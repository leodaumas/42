#include<stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(){
    int size = 4;
   int disp[size][size];
   int i, j, k, x;
   i = 0;
   while(i<size)
   {
       j=0;
       while(j<size)
       {
           disp[i][j] = 0; //enter the correct values here
           j++;
       }
       i++;
   }
    k = 0;
    while(k<size)
   {
       x=0;
       while(x<size)
       {
            ft_putchar((disp[k][x] + '0'));
            ft_putchar(' ');
            if(x==(size-1))
            {
                ft_putchar('\n');
            }
            x++;
       }
       k++;
   }

   return 0;
}