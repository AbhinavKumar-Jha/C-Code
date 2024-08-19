#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if(n%15==0){
        printf("The number is divisible by both 5 and 3");
    }
    else{
        printf("The number is not divisible by 5 and 3");
    }
    return 0;
}