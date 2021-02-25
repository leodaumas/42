#include <stdio.h> 
  
int power(int x, int y) 
{ 
    if (y >= 1) { 
        return (x * power(x, y - 1));
    } 
    return (x= 0); 
} 

int main() 
{ 
    int x = 2; 
    int y = 2; 
  
    printf("Power is %d", power(x, y)); 
  
    return 0; 
}