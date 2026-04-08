#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct book // typedef 
    {
        char name[50];
        float price;
        int noOfPages;
    } book;

    book a;
    book b;
    book c;
    book d;

    a.noOfPages = 100;
    a.price = 499.78;
    strcpy(a.name, "secret seven");

    b.noOfPages = 200;
    b.price = 799.78;
    strcpy(b.name, "the ending");

    printf("noOfPages : %d\n", a.noOfPages);
    printf("price : %f\n", a.price);
    printf("name : %s\n", a.name);

    printf("\n");

    printf("noOfPages : %d\n", b.noOfPages);
    printf("price : %f\n", b.price);
    printf("name : %s\n", b.name);

    return 0;
}