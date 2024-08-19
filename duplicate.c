#include<stdio.h>
int main(){
    int arr[7]={1,4,7,23,56,5,4};
    for(int i=0;i<=6;i++){
        for(int j=i+1;j<=6;j++){
            if(arr[i]==arr[j]){
                printf("%d is the duplicate element",arr[i]);
                break;
            }
        }
    }
    return 0;
}