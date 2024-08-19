#include<stdio.h>
int main(){
    int m;
    printf("Enter the row of 1st matrix :");
    scanf("%d",&m);
     int n;
    printf("Enter the column of 1st matrix :");
    scanf("%d",&n);
    int arr[m][n];
    printf("\nEnter elements of 1st matrix :");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // wave print
    printf("\n");
     for(int i=0;i<m;i++){
              if(i%2==0){
                for(int j=0;j<n;j++){
                 printf("%d ",arr[i][j]);
                }
            }
            else{
                for(int j=n-1;j>=0;j--){
                    printf("%d ",arr[i][j]);
                }
            }
        printf("\n");
    }
    return 0;
}