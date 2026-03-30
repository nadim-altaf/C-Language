#include <stdio.h>
#include <string.h>
int main()
{
    char s1[12] = "Nadim"; // \0 also included in size
    char s2[] = "Altaf";
    strcat(s2, s1);
    // s2[0] = 'M';
    printf("%s", s1);
    return 0;
}