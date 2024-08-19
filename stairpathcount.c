//  single step and double step
// #include<stdio.h>
// int stair(int n){
//     if(n<=2)return n;
//     int totalways=stair(n-1)+stair(n-2);
//     return totalways;
// }
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     int ways=stair(n);
//     printf("%d",ways);
//     return 0;
// }


// single step, double step and three steps
#include<stdio.h>
int stair(int n){
    if(n<=3)return n;
    int totalways=stair(n-1)+stair(n-2)+stair(n-3);
    return totalways;
}
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int ways=stair(n);
    printf("%d",ways);
    return 0;
}
