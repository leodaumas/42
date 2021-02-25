int    ft_str_is_printable(char *str)
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
         if(str[index] >= 32 && str[index] <= 126)
        {
        //printf("%d: %c\n",index, str[index]);
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