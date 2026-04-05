#include <stdio.h>
int main()
{
    int n;
    printf("Enter no. of Rows :");
    scanf("%d",&n);
    for (int i = 1; i <= 4; i++) // no. of rows -> denoted by i
    {
        for (int j = 1; j <= 4; j++) // no. of columns -> denoted by j
        {          
                printf("%d", j);
        }       
            printf("\n");
        }
    

    return 0;
}