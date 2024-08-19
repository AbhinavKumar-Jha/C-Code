#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (n > 100 && n < 1000)
    {
        printf("The number is of three digit ");
    }
    else
    {
        printf("The number is not of three digits");
    }
    return 0;
}