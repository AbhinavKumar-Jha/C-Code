// #include<stdio.h>
// #include<string.h>
// #include<stdbool.h>
// int main(){
//     typedef struct date{
//     int day;
//     int month;
//     int year;
//     }date;

//     date a,b;
//     a.day=5;
//     a.month=2;
//     a.year=2005;

//     // b.day=1;
//     // b.month=1;
//     // b.year=2024;

//     b.day=5;
//     b.month=2;
//     b.year=2005;

//     bool flag=true;
//     if(a.day!=b.day) flag=false;
//     if(a.month!=b.month) flag=false;
//     if(a.year!=b.year) flag=false;

//     if(flag==true) printf("The dates are Same");
//     else printf("The dates are Different");
//     return 0;
// }


#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct date{
       int day;
       int month;
       int year; 
    }date;
    date a,b;
    a.day = 5;
    a.month = 2;
    a.year = 2005;

    b.day = 15;
    b.month = 2;
    b.year = 2005;

    bool flag = true;
    if(a.day!=b.day) flag=false;
    if(a.month!=b.month) flag=false;
    if(a.year!=b.year) flag=false;

    if(flag==true) printf("The dates are same");
    else printf("The dates are different");

    return 0;
}