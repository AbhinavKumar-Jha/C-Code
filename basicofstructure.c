// #include<stdio.h>
// int main(){
//     struct pokemon{// User defined datatypes
//     int hp;
//     int speed;
//     int attack;
//     char tier;// G,S,A,B
//     };
//     struct pokemon pikachu;
//     pikachu.attack = 60;
//     printf("Enter hp of pikachu :");
//     scanf("%d",&pikachu.hp);
//     // pikachu.hp = 50;
//     pikachu.speed = 100;
//     pikachu.tier = 'A';

//     //printf("%d\n",pikachu.hp);

//     struct pokemon charizard;
//     charizard.attack = 130;
//     charizard.hp = 80;
//     charizard.speed = 80;
//     charizard.tier = 'S';


//     struct pokemon mewto;
//     mewto.attack = 170;
//     mewto.hp = 150;
//     mewto.speed = 200;
//     mewto.tier = 'G';

//    // printf("%c",charizard.tier);
//    printf("%d",pikachu.hp);
    
//     return 0;
// }

// Second Method

#include<stdio.h>
int main(){
    struct pokemon{// User defined datatypes
    int hp;
    int speed;
    int attack;
    char tier;// G,S,A,B
    } pikachu,charizard, mewto;
   
    pikachu.attack = 60;
    printf("Enter hp of pikachu :");
    scanf("%d",&pikachu.hp);
    // pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';

    //printf("%d\n",pikachu.hp);

    charizard.attack = 130;
    charizard.hp = 80;
    charizard.speed = 80;
    charizard.tier = 'S';

    mewto.attack = 170;
    mewto.hp = 150;
    mewto.speed = 200;
    mewto.tier = 'G';

   // printf("%c",charizard.tier);
   printf("%d",pikachu.hp);
    
    return 0;
}