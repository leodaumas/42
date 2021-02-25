#include <stdio.h>
#include <ctype.h>
int    ft_str_is_alpha(char *str)
{
    int index = 0;
    int result = 0;
 
     while(str[index] != '\0')
     {
         if(isalpha(str[index])!=0)
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
//    printf("\nr: %d", result);
    return(result);
}

int main()
{
    char c[] = "helloWaaa";
    printf("%d\n",ft_str_is_alpha(c));
    printf("%d",(isalpha(c)));
   // printf("%s",c);
}