#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
     int b;
    printf("Enter  number :");
    scanf("%d",&b);
    int power= pow(a,b);
    printf("%d raised to power %d is %d",a,b,power);
    return 0;
}