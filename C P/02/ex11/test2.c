#include <stdio.h>

int main(){
    char x[100] = "Coucou\ntu vas bien ?";
    printf("%s\n", x);
    printf("%X\n", x);

    printf("%d ", (900 / 16));
    printf("%d\n", (900 % 16));

    printf("%d ", (56 / 16));
    printf("%d\n", (56 % 16));

    printf("%d ", (3 / 16));
    printf("%d\n", (3 % 16));
}

/*
Firstly, find the largest power of 16 that will fit into the number. E.g. for 1,966, 256 is the biggest (16 x 16) - use a for loop to countdown and if statement to find it. e.g is (16 x 16 x 16 ) > number?, yes, so too big, try next one..
Once found, divide by that power to get your nth power digit. 1,966 = 256 x 7 remainder 174, so first digit is 7 - use a for loop again, subtract the power (256) again and again from the number until the answer is less than the power, count how many times you subtracted the power to get there. In this case 256 was subtracted 7 times until the answer was less than 256, the remainder was 174.
Store the remainder and repeat the process for the next power down of 16 e.g. 16 in this case. So repeat the above for 16 instead of 256. 174 = 10 x 16 remainder 14 so second digit is 10 (10 equals A from look up table)
Repeat step 2 and 3 until result is 0.
The hex value is the digit sequence of the divisors found, each divisor will be between 0 and 15, so in this case it's 7, 10 and 14. Convert each digit to hex using a look up table to finally arrive at 1,966 = 7 A E
To convert hexadecimal to decimal do the opposite;

Get the decimal equivalent of hex from table (1=1, A=10, F=15)
Multiply every digit by the power of 16 per digit location.(E.g. for 07AE, 0 x (16 x 16 x 16), 7 x (16x16), A x (x16), E (x1)
Simply sum all the multipliers. E.g (7(7) x 16 x 16) + (10(A) x 16) + (14(E) x 1) = 1792 + 160 + 14 = 1,966
*/