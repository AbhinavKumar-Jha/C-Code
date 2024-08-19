// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     int sum = 0;
//     if(n%2==0){
//         sum=-n/2;
//     }
//     else{
//         sum=-n/2+n;
//     }
//     printf("The sum is :%d",sum);
//     return 0;
// }

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int sum = 0;
    for(int i=1;i<=n;i++){
        if(i%2!=0)
        sum=sum+i;
        else sum=sum-i;
    }
    printf("The sum is :%d",sum);
    return 0;
}