#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int x;
    printf("Enter the value of x :");
    scanf("%d",&x);
    int totalPairs=0;
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(arr[i]+arr[j]==x){
                totalPairs++;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
     printf("%d",totalPairs);
    return 0;
}