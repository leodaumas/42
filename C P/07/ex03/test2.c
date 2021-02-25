#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
 int i;

 i = 0;
 while (str[i] != '\0')
  i++;
 return (i);
}

char *ft_strcat(char *dest, char *src)
{
 int size_dest;
 int size_src;
 int index;

 index = 0;
 size_dest = ft_strlen(dest);
 size_src = ft_strlen(src);
 while (src[index] != '\0')
 {
  dest[size_dest + index] = src[index];
  index++;
 }
  dest[size_dest + index] = '\0';
 return (dest);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
 int i;
 char *res;
 int len;
 int res_len;

 i = -1;
 len = 0;
 while (++i < size)
 {
   len += ft_strlen(strs[i]);
   len += ft_strlen(sep);
 }
 if(!(res = malloc(sizeof(char)* len)))
  return(NULL);
 i = -1;
 while (++i < size)
 {
   res = ft_strcat(res, strs[i]);
   res = ft_strcat(res, sep);
 }
 res_len = ft_strlen(res);
 res[res_len - 1] = '\0';
 return(res);
}

 int main()
 {
 int index;
 char **strs;
 char *separator;
 char *result;
 strs = (char **)malloc(sizeof(char) * sizeof(strs));
 strs[0] = "Hi,";
 strs[1] = "Yo!";
 separator = " ";
 index = 2;
 
  printf("%s", ft_strjoin(index, strs, separator));
 }

