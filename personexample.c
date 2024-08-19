#include<stdio.h>
#include<string.h>
int main(){
    struct Person{
        char name[50];
        int salary;
        int age;
    }a,b;

    a.salary=85000;
    a.age=17;
    strcpy(a.name,"Anubhav");

    b.salary=50000;
    b.age=20;
    strcpy(b.name,"Abhinav");

    printf("%s\n",a.name);
    printf("%d",b.age);

    return 0;
}