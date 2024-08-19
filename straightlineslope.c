#include<stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    printf("the coordinates are : ");
    scanf("%d %d %d",&x1,&x2,&x3);
    printf("the coordinates are :");
    scanf("%d %d %d",&y1,&y2,&y3);
    double m1,m2;
    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y2)/(x3-x2);
    if(m1=m2){
        printf("The points lie in a same plane");
    }
    else{
        printf("point does not lie in a same plane");
    }

}