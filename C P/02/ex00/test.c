#include<stdio.h>
#include<string.h>

int main()
{
    char ch_arr1[20] = "source";
    char ch_arr2[20] = "destination";

    
    strcpy(ch_arr2, ch_arr1); // copy the contents of ch_arr1 to ch_arr2

    printf("First string (ch_arr_1) = %s\n", ch_arr1);
    printf("Second string (ch_arr_2) = %s\n", ch_arr2);

    return 0;
}