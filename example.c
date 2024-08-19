#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        float price;
        int pages;
    } a,b,c;
    strcpy(a.name,"Secret Seven");
    a.price=450.80;
    a.pages=654;
    

    printf("%d\n",a.pages);
    printf("%s\n",a.name);
    printf("%f\n",a.price);
    return 0;
}