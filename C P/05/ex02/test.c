#include <stdio.h> 
  
int power(int x, unsigned int y) 
{ 
    int res = 1;
    int k;
    int i;

    i = 1;
    k = x;
    while (i < y) { 
        x = x * k;
        i++; 
    } 
    return x; 
} 

int main() 
{ 
    int x = 2; 
    unsigned int y = 5; 
  
    printf("Power is %d", power(x, y)); 
  
    return 0; 
}