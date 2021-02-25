#include <stdlib.h>

#include "ft_strock_str.h"

int ft_str_length(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
        return(i);
}

char    *ft_strdup(char *src)
{
    int i;
    char *dest;

    i = 0;
    if ((dest = (char *)malloc(ft_str_length(src) * sizeof(char) + 1)) == NULL)
        return (0);
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

struct s_stock_str    *ft_strs_to_tab(int ac, char **av)
{
    int                    i;
    struct s_stock_str    *array;

    ac = ac + 0;
    if (!(array = malloc((ac + 1) * sizeof(struct s_stock_str))))
        return (NULL);
    i = 0;
    while (i < ac)
    {
        array[i].size = ft_str_length(av[i]);
        array[i].str = av[i];
        array[i].copy = ft_strdup(av[i]);
        i++;
    }
    array[i] = (struct s_stock_str){0, 0, 0};
    return (array);
}

int                    main(void)
{
    int                    index;
    int                    ac;
    char                av;
    struct s_stock_str    *structs;

    ac = 10;
    av = (char )malloc((ac + 1) * sizeof(char *));
    index = 0;
    while (index < ac)
    {
        av[index] = (char *)malloc((2 + 1) * sizeof(char));
        av[index][0] = 'x';
        av[index][1] = (char)(index + 'a');
        av[index][2] = '\0';
        index++;
    }
    structs = ft_strs_to_tab(ac, av);
    index = 0;
    while (index < ac)
    {
        printf("%d\n", index);
        printf("\t| original : $%s$ @ %p\n", structs[index].str, structs[index].str);
        printf("\t|   copied : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
        printf("\t|     size : %d\n", structs[index].size);
        index++;
    }
}