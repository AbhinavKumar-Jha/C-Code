#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows in odd digit :");
    scanf("%d",&n);
    printf("*");
    int nsp=5;
    for(int i=1;i<=n/4;i++){
        for(int j=1;j<=4;j++){
            if(j==2)
            nsp +=4;
            else
            nsp=5;
            if(j==4)
            nsp -=5;
            printf("\n\n");
            for(int k=1;k<nsp;k++)
            printf(" ");
            printf("*");
        }
    }
    return 0;

}