#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Enter b number : ");
    scanf("%d",&b);
    printf("Enter c number : ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d is greatest",a);
    }
    if(b>a && b>c){
        printf("%d is greatest",b);
    }
    if(c>a && c>b){
        printf("%d is greatest",c);
    }
    return 0;

}