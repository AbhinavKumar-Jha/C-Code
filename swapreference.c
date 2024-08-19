#include<stdio.h>
void swap(int* x,int* y){
int temp;
temp =*x;
*x=*y;
*y=temp;
return;
}
int main(){
    int a;
    printf("Enter a:");
    scanf("%d",&a);
     int b;
    printf("Enter b:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("The value of a is %d\n",a);
    printf("The value of b is %d",b);
}