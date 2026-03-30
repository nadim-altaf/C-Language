#include <stdio.h>
int main()
{
    int marks[10] = {98, 45, 75, 95, 100, 65, 32, 25, 48, 99};
    for (int i = 0; i < 10; i++)
    {
        if (marks[i] < 35)
        {
            printf("%d ", i);
        }
    }
    return 0;
}

//  int size = 10, b =[size];  -> this declration is valid