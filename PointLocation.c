#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the coordinates :");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0){
        printf("the line lies on origin");
    }
    else if(x==0){
        printf("the line lies on y axis");
    }
    else if(y==0){
        printf("the line lies on x axis");
    } 
    else{
        printf("the line does not lie on x axis or y axis");
    }
    return 0;

}