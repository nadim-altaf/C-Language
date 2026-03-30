 // LINEAR SEARCH
#include <stdio.h>
#include<stdbool.h>
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int x = 4;
    int idx = -1;
    bool flag = false; // false means not present
    //int check = 0; // 0 means the element is not present
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == x)
        {
            flag = true;
            //check = 1; // i means element is present
            idx = i;

            break;
        }
    }
        if (flag == false)
        {
            printf("%d is not present in array", x);
        }
        else
        {
            printf("%d is present in array and its index is %d", x,idx);
        }
    
    return 0;
}