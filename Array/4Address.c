#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    printf("%p\n", &arr[0]);
    printf("%p\n", &arr[1]);
    printf("%p\n", &arr[2]);
    printf("%p\n", &arr[3]);
    printf("%p\n", &arr[4]);

    return 0;
}
// output : hexa decimal 0 1 2 3 4 5 6 7 8 9 A B C D E F
// 0061FF0C
// 0061FF10
// 0061FF14
// 0061FF18
// 0061FF1C
