#include<stdio.h>
int main(){
    int arr[7]={32,54,63,46,24,75,98};
    int x=5;
    int check=0;
    for(int i=0;i<=6;i++){
        if(arr[i]==x){
            check =1;
            break;
        }
    }
    if(check==0){
        printf("%d is not present in the array",x);
    }
    else{
        printf("%d is present in the array",x);
    }
    return 0;
}