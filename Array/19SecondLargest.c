#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[7] = {1, 2, 7, 4, 4, 3, 2};

    int max = INT_MIN;
    int smax = INT_MIN;
    
    // int max = ;  // INT_MIN -> -2147483648
    // for (int i = 0; i < 7; i++)
    // {
    //     if (max < arr[i])
    //     {
    //         max = arr[i];
    //     }
    // }
    // for (int i = 0; i < 6; i++)
    // {
    //     if (arr[i] != max && smax < arr[i])
    //     {
    //         smax = arr[i];
    //     }
    // }
    // printf("%d", smax);

    for (int i = 0; i < 7; i++)
    {
        if (max < arr[i])
        {
            smax = max;   // smax is previous max
            max = arr[i]; // max is now a new max
        }
        else if (smax < arr[i] && max != arr[i])
        {
            smax = arr[i];
        }
    }
    printf("%d", smax);

    return 0;
}