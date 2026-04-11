
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef struct pokemon
{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
} pokemon;

void change(pokemon *p)
{

    strcpy((*p).name, "Raichu");
    // (*p).hp = 70;
    p->hp = 70; // [  (*x).something = x->something  ]
    (*p).attack = 80;
    (*p).speed = 110;
    (*p).tier = 'S';
    return;
}

int main()
{
    pokemon pikachu = {60, 70, 100};  // other way of initialization

    // pikachu.hp = 60;
    // pikachu.attack = 70;
    // pikachu.speed = 100;
    pikachu.tier = 'A';
    strcpy(pikachu.name, "Pikachu");

    pokemon *x = &pikachu;

    printf("%s\n", pikachu.name);
    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.speed);
    printf("%c\n", pikachu.tier);

    change(&pikachu);

    printf("%s\n", pikachu.name);
    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.speed);
    printf("%c\n", pikachu.tier);

    // (*x).hp = 70; // pikachu.hp = 70
    // printf("%d", pikachu.hp);

    return 0;
}