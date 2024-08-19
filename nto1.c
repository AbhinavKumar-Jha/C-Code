// #include<stdio.h>
// void decreasing(int n){
//     if(n==0) return;
//     printf("%d\n",n);
//     decreasing(n-1);
//     return;
// }
// int main(){
//     int n;
//     printf("Enter the number :");
//     scanf("%d",&n);
//     decreasing(n);
//     return 0;

// }


// 1 to n

// #include<stdio.h>
// void increasing(int x,int n){
//     if(x>n) return;
//     printf("%d\n",x);
//     increasing(x+1,n);
//     return;
// }
// int main(){
//     int n;
//     printf("Enter the number :");
//     scanf("%d",&n);
//     increasing(1,n);
//     return 0;

// }


// Second Method

#include<stdio.h>
void increasing(int n){
    if(n==0) return;
    
    decreasing(n-1);
    printf("%d\n",n);
    return;
}
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    increasing(n);
    return 0;

}