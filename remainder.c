#include<stdio.h>
int main()
{
    int a,b,q,r;
    printf("Enter the first number :");
    scanf("%d",&a);
     printf("Enter the second number :");
     scanf("%d",&b);
     q = a/b;
     r = a-(b*q);
     printf("The remainder is :%d ",r);
    return 0;
}