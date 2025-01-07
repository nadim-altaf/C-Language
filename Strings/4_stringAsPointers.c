#include <stdio.h>
#include <string.h>
int main()
{

     char str[] = "collage wallah";
    // char *ptr = str; // ptr now points to str[0]
    // printf("%p\n", &str[0]);
    // printf("%p", str);

    // int i = 0;
    // while(*ptr !='\0'){
    //     printf("%c",*ptr);
    //     ptr++;
    //     i++;
    // }
             //str[0] = 'D';

    char* ptr = "collage wallah";
   // ptr++;
     ptr[0] = 'D';
     printf("%s",*ptr);
    return 0;
}
