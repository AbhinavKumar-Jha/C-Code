#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("Even");
    }
    // if (n%2!=0)
    // {
    //     printf("Odd");
    // }
    else{
        printf("Odd");
    }
    return 0;
}