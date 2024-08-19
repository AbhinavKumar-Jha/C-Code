#include <stdio.h>
int main()
{
    int a;
    printf("Enter 1st number : ");
    scanf("%d", &a);
    int b;
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    int c;
    printf("Enter 3rd number : ");
    scanf("%d", &c);
    int d;
    printf("Enter 4th number : ");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("%d is greatest", a);
    }
    if (b > a && b > c && b > d)
    {
        printf("%d is greatest", b);
    }
    if (c > a && c > b && c > d)
    {
        printf("%d is greatest", c);
    }
    if (d > a && d > b && d > c)
    {
        printf("%d is greatest", d);
    }
    return 0;
}