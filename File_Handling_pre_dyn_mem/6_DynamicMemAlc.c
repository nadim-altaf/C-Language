#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    //     int n; // 4 bytes
    //     printf("Enter array's size : ");
    //     scanf("%d", &n);

    //     int arr[n]; // n*4
    //    // int *arr = new  int[n];

    //     for (int i = 0; i < n; i++)
    //     {
    //         scanf("%d", &arr[i]);
    //     }

    //     for (int i = 0; i < n; i++)
    //     {
    //         printf("%d ", arr[i]);
    //     }

    // int a = sizeof(bool);
    // printf("%d", a);

    int* ptr = (int*) malloc(10*4);
    ptr++;
    
    printf("%d",*ptr);
    return 0;
}