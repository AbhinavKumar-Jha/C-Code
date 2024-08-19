#include<stdio.h>
int main(){
    // 1st matrix order
    int m;
    printf("Enter the row of 1st matrix :");
    scanf("%d",&m);
     int n;
    printf("Enter the column of 1st matrix :");
    scanf("%d",&n);
    int arr[m][n];
    // input the 1st matrix
    printf("\nEnter elements of 1st matrix");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // 2nd matrix order
     int p;
    printf("Enter the row of 2nd matrix :");
    scanf("%d",&p);
     int q;
    printf("Enter the column of 2nd matrix :");
    scanf("%d",&q);
     int brr[p][q];
     // input the 2nd matrix
    printf("\nEnter elements of 2nd matrix :");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    // check
if(n!=p){
    printf("The matrix is not multiplicable");
}
else{
    // multiplication
    int res[m][q];
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            res[i][j]=0;
            // i row of a, j column of b
            for(int k=0;k<n;k++){
                res[i][j] += arr[i][k]*brr[k][j];
            } 
        }
    }
    // print
    printf("The resultant matrix is :\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d ",res[i][j]);
        }
         printf("\n");
    }
}
    return 0;
}