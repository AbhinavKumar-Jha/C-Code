#include<stdio.h>
#include<string.h>
int main(){
    char str[20]="Abhinav";
    printf("%s\n",str);
    // 2nd index par 'i'
    for(int i=6;i>=2;i--){
        str[i+1]=str[i];
    }
    str[2]='i';
    printf("%s",str);
    return 0;
}