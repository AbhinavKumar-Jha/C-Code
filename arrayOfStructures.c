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
    pokemon arr[3];
    arr[0].attack=200;
    arr[0].hp=100;
    arr[0].speed=200;
    arr[0].tier='S';
    strcpy(arr[0].name,"Mewto");

    arr[1].attack=160;
    arr[1].hp=90;
    arr[1].speed=160;
    arr[1].tier='A';
    strcpy(arr[1].name,"Charizard");

    arr[2].attack=100;
    arr[2].hp=80;
    arr[2].speed=100;
    arr[2].tier='B';
    strcpy(arr[2].name,"Pikachu");

    for(int i=0;i<3;i++){
    printf("%s\n",arr[i].name);
    printf("Attack: %d\n",arr[i].attack);
    printf("Speed: %d\n",arr[i].speed);
    printf("HP :%d\n",arr[i].hp);
    printf("Tier: %c\n",arr[i].tier);

    }
    return 0;
}