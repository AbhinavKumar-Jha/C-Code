#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,2};
    for(int i=0;i<=arr[5];i++){
        if(arr[i]==arr[i+1]){
            printf("%d is same",arr[i]);
        }
        else{
            printf("They are different");
        }
    }
    return 0;
}