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
 int j;
 char *res;

 i = 0;
 while (**strs)
 {
   printf("%s", strs[i]);
   i++;
  size += ft_strlength(&strs[i]);
  size += ft_strlength(&sep);
 }
 if(!(res = malloc(sizeof(char)*size + 1)))
  return(NULL);
 printf("%d", size);
 j = 0;
 while (**strs)
 {
   res = ft_strcat(res, strs[j]);
   strs++;
 }
 
 return(res);
}
*/
int main()
{/*
 int index;
 char **strs;
 char *separator;
 char *result;
 strs = (char **)malloc(4 * sizeof(strs));
 strs[0] = "Hi,";
 strs[1] = "how";
 strs[2] = "are";
 strs[3] = "you?";
 strs[4] = "-Fine,";
 strs[5] = "and";
 strs[6] = "you?";
 separator = " ";
 index = 7;
*/
char a[100] = "Hello, ";
 char b[100] = "there";
 
 //printf("%d", ft_strlen(strs[0]));
 printf("%s", ft_strcat(a,b));

// printf("%s", ft_strcat(&strs[0], &strs[1]));
 /*
 result = ft_strjoin(index, strs, separator);
 printf("i: %d result: %s \n", index, result);
 free(result);
 index++;
 */
}