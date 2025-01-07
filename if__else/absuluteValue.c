#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    if(n<0){
        n = n * (-1);
    }
        printf("The absulute value is:%d",n);
    
    //else{
     //   printf("The absulute value is:%d",n);
    //}


    return 0;
}