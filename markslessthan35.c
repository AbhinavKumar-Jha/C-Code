#include<stdio.h>
int main(){
    int marks[10] = {95,90,31,50,25,100,57,23,54,67};
    for(int i=0;i<10;i++){
        if(marks[i]<35){
           printf("%d ",i);
        }
    
    }
    return 0;
}