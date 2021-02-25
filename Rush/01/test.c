#include <stdio.h>

int main() {
  int i = 0;

    while (++i < 16)
        {
        printf("%d - div: %d mod: %d\n",i, (i / 4),(i % 4));
        
        }
  return 0;
}