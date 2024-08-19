#include<stdio.h>
int main()
{
    int l;
    printf("Enter the length :" );
    scanf("%d",&l);
    int b;
    printf("Enter the breadth :" );
    scanf("%d",&b);
    int area;
    area = (l*b);
    printf("Area of Rectangle is :%d \n",area);
    int perimeter;
    perimeter = 2*(l+b);
    printf("Perimeter of rectangle is :%d \n",perimeter);
if(area>perimeter){
    printf("Maza Aajaaega ");
}
if(perimeter>area){
    printf("Maza nahi aaega ");
}
if(area==perimeter){
    printf("Bahut maza aaega");
}
    return 0;
}