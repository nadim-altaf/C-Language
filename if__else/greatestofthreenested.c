#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter ist number :");
    scanf("%d", &a);
    printf("\nEnter 2nd number :");
    scanf("%d", &b);
    printf("\nEnter 3rd number  :");
    scanf("%d", &c);

    if(a > b){ // b is out of race
        if(a > c)
            printf("%d is greatest",a);
        else //a<c --> b<a<c
            printf("%d is greatest",c);
    }
  else{ // b > a --> a ab sabse bada to nahi hai
            if(b > c)
                printf("%d is greatest",b);
    
            else //c > a --> a<b<c
                printf("%d is greatest",c);
    }
    

    return 0;
}