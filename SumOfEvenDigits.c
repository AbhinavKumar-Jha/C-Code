#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int sum=0;
    int lastDigit=0;
    while(n!=0);{
        if(n%2==0)
        lastDigit =n%10;
        sum=sum+lastDigit;
        n=n/10;
    }
    printf("The Sum of Digits is %d",sum);
    return 0;

}