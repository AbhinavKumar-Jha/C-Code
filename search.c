#include<stdio.h>
int main(){
    int arr[7]={12,34,54,75,89,43,57};
    int x=54;
    for(int i=0;i<=6;i++){
        if(arr[i]==x){
            printf("%d is present in the array and the index is %d\n",x,i);
            //break;
        }
    }
    return 0;
}