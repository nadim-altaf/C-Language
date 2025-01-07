#include <stdio.h>
#include <math.h>
#include <limits.h>
int main()
{
    float x = cbrt(10);
    printf("%f",x);
    // int x = __INT_MAX__; // __INT_MAX__ ->  2147483647
    // printf("%d\n", x);
   // int x = ;
    long y = __LONG_MAX__;

    printf("%ld", y);
    return 0;
}