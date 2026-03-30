#include <stdio.h>
// #include <limits.h>
int main()
{
    int arr[7] = {1, 2, 5, 4, 15, 19, 8};

    int max = arr[0];
    // int max = ;  // INT_MIN -> -2147483648
    for (int i = 0; i < 7; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d", max);

    return 0;
}