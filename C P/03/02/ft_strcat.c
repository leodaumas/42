int ft_strlen(char *str)
{
 int i;

 i = 0;
 while (str[i] != '\0')
 {
  i++;
 }
 return (i);
}

char *ft_strcat(char *dest, char *src)
{
 unsigned int dest_len = ft_strlen(dest);
 unsigned int i;
 unsigned int src_len = ft_strlen(src);

 i = 0;
 while (src[i] != '\0')
 {
  dest[dest_len + i] = src[i];
  i++;
 }
 dest[dest_len + i] = '\0';
 return dest;
}