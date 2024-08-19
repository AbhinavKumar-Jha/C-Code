#include<stdio.h>
int main(){
    int arr[7]={23,54,75,65,8,25,9};
    int min=arr[0];
    for(int i=0;i<7;i++){
        if(min>arr[i])
        min=arr[i];
    }
    printf("%d",min);
    return 0;
}