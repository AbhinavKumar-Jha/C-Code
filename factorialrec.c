#include<stdio.h>
int factorial(int n){
    if(n==1 || n==0)return 1;// Base case
    return  n*factorial(n-1);
}
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("%d",fact);
    return 0;
}