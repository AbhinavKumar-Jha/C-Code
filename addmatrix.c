#include<stdio.h>
int main(){
    int arr[2][2]={1,2,3,4};
    int brr[2][2]={5,6,7,8};
    printf("\n");
    int res[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            res[i][j] = arr[i][j] + brr[i][j];
        }
    }
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}