#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_length(char *str)
{
 int i;

 i = 0;
 while (*str)
 {
  str++;
  i++;
 }
 return(i);
}

char *ft_strdup(char *src)
{
 int size;
 char *dest;
 int i;
 char *aux;

 i = -1;
 size = ft_length(src) + 1;
 if(!(dest = malloc(sizeof(char) * size)))
  return (NULL);
 aux = dest;
 while(*src)
 {
  *dest = *src;
  dest++;
  src++;
 }
 *dest = '\0';
 return (aux);
}

int main()
{
 char c[100] = "ola";
 char *res;
     
 printf("%s", res = ft_strdup(c));
 printf("\nOriginal strdup: %s",(res = strdup(c)));
}