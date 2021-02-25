#include <unistd.h>
#include <stdio.h>


int ft_strcmp(char *str1, char *str2)
{
    int i;

    i = 0;
    while(str1[i] == str2[i] && str1[i])
        i++;
    return (str1[i] - str2[i]);
}

void ft_putchar(char c)
{
    write (1, &c, 1);
}

int hidenp(char *str1, char *str2)
{
    int i;
    int j;
    int m;
    int temp[256];
    char new_str[256];

    i = 0;
    while ( i < 256)
    {
        temp[i] = 0;
        i++;
    }
    i = 0;
    j = 0;
    m = 0;
    while(str1[i])
    {
        while(str2[j]) 
        {
            if (str1[i] == str2[j] && temp[str1[i] - '0'] == 0 && i <= j)
            {
                new_str[m] = str1[i];
                temp[str1[i] - '0'] = 1;
                m++;
                break;
            }
            j++;
        }
        i++;
    }
    if (ft_strcmp(new_str, str1) == 0) 
        return (1);
    else
        return (0);
}

int main(int argc, char *argv[])
{
    int res;

    res = 0;
    if (argc == 3)
    {
        res = hidenp(argv[1], argv[2]);
        ft_putchar(res + '0');
    }
    write(1, "\n", 1);
    return 0;
}