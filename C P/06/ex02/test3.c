#include <stdio.h>

int main (int argc, char *argv[])
{
  int count;

    count = 1;
    while(count < argc)
        count++;

    while(count > 0)
    {
        printf("argv[%d] = %s\n", count, argv[count]);
        count++;
    }
  return 0;
}