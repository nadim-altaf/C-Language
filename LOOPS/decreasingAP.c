#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    
    //100 97 94

    float a = 100; //use float for point
    
    for (int i = 1; i<=n; i++)
    {
        printf("%.1f ",a);
        a = a * 1/2;
        
    }

        return 0;
}