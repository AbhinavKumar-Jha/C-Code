#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;
    typedef struct legendarypokemon{
        pokemon normal;
        char ability[100];
    } legendarypokemon;

    typedef struct godpokemon{
        legendarypokemon legend;
        int specialattack;
    } godpokemon;

    godpokemon arceus;
    arceus.specialattack=300;
    strcpy(arceus.legend.ability,"Turns into stone");
    arceus.legend.normal.attack=500;

    
    legendarypokemon mewto;
    strcpy(mewto.ability,"Pressure");
    mewto.normal.hp=150;
    mewto.normal.attack=180;
    mewto.normal.speed=180;
    strcpy(mewto.normal.name,"Mewto");
    mewto.normal.tier='S';
    return 0;
}