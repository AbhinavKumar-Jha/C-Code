// #include<stdio.h>
// int main(){
// int arr[7]={1,5,7,56,87,54,78};
// int max=arr[0];
// for(int i=0;i<7;i++){
//     if(max<arr[i])
//     max=arr[i];
// }
//     printf("%d",max);
//     return 0;
// }


#include<stdio.h>
#include<limits.h>
int main(){
int arr[7]={1,5,7,56,87,54,78};
int max=INT_MIN;
for(int i=0;i<7;i++){
    if(max<arr[i])
    max=arr[i];
}
    printf("%d",max);
    return 0;
}
