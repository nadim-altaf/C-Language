#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;

    typedef struct lagendaryPokemon
    {
        pokemon normal;
        char ability[10];
    } lagendaryPokemon;

    typedef struct newPokemon{
        lagendaryPokemon lagend;
        int specialattack;
    } newPokemon;

    newPokemon arceus;
    arceus.specialattack = 300;
    strcpy(arceus.lagend.ability,"Turn anyone into stone");
    arceus.lagend.normal.attack = 200;

    // lagendaryPokemon Mewtwo;

    // strcpy(Mewtwo.ability, "Pressure");
    // Mewtwo.normal.hp = 150;
    // Mewtwo.normal.attack = 300;
    // strcpy(Mewtwo.normal.name, "Mewtwo");
    // Mewtwo.normal.speed = 60;
    // Mewtwo.normal.tier = 'S';

    return 0;
}