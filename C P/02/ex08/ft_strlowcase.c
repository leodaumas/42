char    *ft_strlowcase(char *str)
{
    int index = 0;
    int result = 0;
 
     while(str[index] != '\0')
     {
         if(str[index] >= 65 && str[index] <= 90)
            str[index] = (str[index] + 32);
        index++;
    }
    return(str);
}