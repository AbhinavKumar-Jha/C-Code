// //strlen
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char* str = "Abhinav Jha";
//     int x = strlen(str);
//     printf("%d",x);
//     return 0;
// }

// //  strcpy
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char s1[12] = "Abhinav Jha";
//     char s2[12];
//     strcpy(s2,s1);
//    // s2[0]='K';
//     printf("%s",s2);
//     return 0;
// }

// strcat
#include<stdio.h>
#include<string.h>
int main(){
    char s1[12] = "Abhinav";
    char s2[3] = "Jha";
    strcat(s1,s2);
    printf("%s",s1);
    return 0;
}

