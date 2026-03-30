#include<stdio.h>
int main()
{
    int n; //dabba ban gaya
    printf("Enter a number :");

    scanf("%d",&n);//dabba mai value daal di, n = 7

    if (n%2==0)//even condition 
    {
        printf("%d is Even number",n);

    }
    else{
        printf(" %d is odd number",n);
    }
    // if (n%2!=0)//odd condition
    // {
    //     printf("%d is Odd number",n);

    // }
    
    return 0;
}