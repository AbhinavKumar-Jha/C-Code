#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows and columns :");// n*n total elements
    scanf("%d",&n);
    printf("Enter all the elements\n");
    int arr[r][c];
    //input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //transpose
    printf("\n");
      int temp;
      arr[r][c]=temp;
      temp=arr[c][r];
      //output
      for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d",arr[j][i]);
        }
        printf("\n");
      }
    return 0;
}
