#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
    }pokemon;
    pokemon a,b,c;
    a.attack=100;
    a.hp=100;
    a.speed=100;
    a.tier='A';
    strcpy(a.name,"Blastoise");

    // b.attack=100;
    // b.hp=100;
    // b.speed=100;
    // b.tier='A';
    // strcpy(b.name,"Blastoise");

    b=a;
    printf("%s",b.name);

    return 0;
}