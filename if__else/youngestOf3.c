#include <stdio.h>
int main()
{
    int aqib, amaan, ayaan;
    printf("Enter age of aqib :");
    scanf("%d", &aqib);
    printf("Enter age of amaan :");
    scanf("%d", &amaan);
    printf("Enter age of ayaan :");
    scanf("%d", &ayaan);

    if (aqib < amaan && aqib < ayaan)
    {
        printf("aqib is youngest");
    }
    if (amaan < aqib && amaan < ayaan)
    {
        printf("amaan is youngest");
    }
    if (ayaan < aqib && ayaan < amaan)
    {
        printf("ayaan is youngest");
    }

    return 0;
}