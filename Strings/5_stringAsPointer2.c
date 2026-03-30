#include <stdio.h>
#include <string.h>
int main()
{
    // char *ptr = "collage wallah";
    // ptr = "physics wallah";
    // ptr = " jee wallah";
    // printf("%s", ptr);

    char str[] = "collage wallah";
   // char *ptr = str;
   // ptr = "physics wallah";
   char* p = str;
   *p = 'p';
    printf("%s", str);

    return 0;
}
