#include <stdio.h>
int main()
{
    struct pokemon // user defined data type
    {
        int hp;
        int speed;
        int attack;
        char tier; // S,A,B,C,D
    } pikachu, charizard, metow;

    // printf("Enter attack of pikachu : ");
    // scanf("%d", &pikachu.attack);
    pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';

    charizard.attack = 130;
    charizard.hp = 80;
    charizard.speed = 80;
    charizard.tier = 'S';

    charizard.attack = 170;
    charizard.hp = 150;
    charizard.speed = 200;
    charizard.tier = 'G';

    printf("%d", pikachu.attack);

    return 0;
}