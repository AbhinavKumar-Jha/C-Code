#include<stdio.h>
int main()
{
    int n;
    printf("Enter Year Name :");
    scanf("%d",&n);
    if(n%4==0){
        printf("Yes it is a Leap Year");
    }
    else{
        printf("No it is not a Leap Year");
    }
    return 0;
}