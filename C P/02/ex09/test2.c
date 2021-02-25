#include <stdio.h> // Now I am able to use printf.
#include <string.h> // I was not able to use strlen without this...
#include <ctype.h>

void Cap(char string[]){     
    int i;
    int x = strlen(string); // You want to get the length of the whole string.
    for (i=1;i<x;i++){
         if (isalpha(string[i]) && string[i-1] == ' '){ 
         // only first letters of a word.
             string[i]= toupper(string[i]);
         }
    }
}

int main(){
  char string[] = "text with lowercase words.";
  Cap(string);
  printf("%s",string);
};