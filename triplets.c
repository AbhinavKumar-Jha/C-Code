#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int totalPairs=0;
    int x;
    printf("Enter the number of x :");
    scanf("%d",&x);
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            for(int k=j+1;k<8;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    totalPairs++;
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    printf("%d",totalPairs);
    return 0;
}