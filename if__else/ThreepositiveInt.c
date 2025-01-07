#include<stdio.h>
int main()
{
    int n,a,d; //MY LOGIC
    printf("Enter number n :");
    scanf("%d",&n);
    printf("\nEnter number a :");
    scanf("%d",&a);
    printf("\nEnter number d :");
    scanf("%d",&d);

    int i;
    i = 50;
    if(n > i){
        printf("n is greatest ");
    }
    if(a > i){
    printf("a is greatest");
    }
    if(d > i){
        printf("d is greatest");
    }
    return 0;
}
