#include <stdio.h>
#include <strings.h>

int main()
{
    char dst[100] = "Hello,";
    char src[100] = "dear";

    char dst1[100] = "Hello,";
    char src1[100] = "";

    char dst2[100] = "";
    char src2[100] = "dear";

    char dst3[100] = "Hello there, this is longer";
    char src3[100] = "hello";

    char dst4[100] = "hello";
    char src4[100] = "Hello there, this is longer";

    printf("0: %lu\n",(strlcpy(dst,src,0))); //For strlcpy() that is simply the length of the source;
    printf("3: %lu\n",(strlcpy(dst,src,3))); //For strlcpy() that is simply the length of the source;
    printf("5: %lu\n",(strlcpy(dst,src,5))); //For strlcpy() that is simply the length of the source;
    printf("9: %lu\n",(strlcpy(dst,src,9))); //For strlcpy() that is simply the length of the source;
    printf("dst/0: %lu\n",(strlcpy(dst1,src1,9))); //For strlcpy() that is simply the length of the source;
    printf("src/0: %lu\n",(strlcpy(dst2,src2,9))); //For strlcpy() that is simply the length of the source;
    printf("dst long: %lu\n",(strlcpy(dst3,src3,9))); //For strlcpy() that is simply the length of the source;
    printf("src long: %lu\n",(strlcpy(dst4,src4,9))); //For strlcpy() that is simply the length of the source;

}