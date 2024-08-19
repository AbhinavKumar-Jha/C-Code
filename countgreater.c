#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int x=4;
    int count =0;
    for(int i=0;i<7;i++){
        if(arr[i]>x){
            count++;
        }
        for(int i=0;i<7;i++){
            printf("%d",count);
        }
    }
    return 0;
}