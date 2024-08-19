#include<stdio.h>
int main(){
    int arr[2][2]={{1,2},{3,4}};
    //arr[0][0]=1
    //arr[0][1]=2
    //arr[1][0]=3
    //arr[0][1]=4
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}