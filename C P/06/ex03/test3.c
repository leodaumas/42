#include <string.h>
#include <string.h>

void ft_sort_strings(int num, char **s)
{
    int i, j;
    for (i = 1; i < num; i++)
    {
        for (j = i; j > 0 && strcmp(s[j-1], s[j]) > 0; j--)
        {
            char *temp = s[j-1];
            s[j-1] = s[j];
            s[j] = temp;
        }
    }
}

int ft_strcmp(const char *a, const char *b)
{
    while (*a && *a == *b)
    {
        a++;
        b++;
    }
    return *a - *b;
}


  int main(int argc, char **argv)
{
  ft_sort_strings(argc - 1, argv + 1);
}
