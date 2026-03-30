#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "Physics wallah";
    // char *s2 = s1;  // s2 is shallow copy

    // let change in s1

    // s1[0] = 'M';
    // printf("%s",s2); 

    // deep copy

    char s2[] = "physics wallah";
    s2[0] = 'M';
    printf("%s\n",s1);
    printf("%s",s2);

    return 0;
}
