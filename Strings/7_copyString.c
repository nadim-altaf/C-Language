#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "Physics wallah";
    
    // deep copy

    char* s2;
    s2 = s1;
    s2 ="collage wallah";
    //s2[0] = 'M';
    printf("%s\n",s1);
    printf("%s",s2);

    return 0;
}
