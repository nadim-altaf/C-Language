#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter no. of Rows :");
    scanf("%d", &n);
    
    for (int i = 1; i <= 4; i++) 
    {

        for (int i = 1; i <= 4; i++) 
        {
            printf("*"); 
        }
        printf("\n"); 
    }

    return 0;
}