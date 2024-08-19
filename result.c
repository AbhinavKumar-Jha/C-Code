/*#include<stdio.h>
int main(){
   int arr[4][2]={76,80,57,81,54,90,45,65};
   for(int i=0;i<4;i++){
    for(int j=0;j<2;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
   }
    return 0;
}
*/

#include<stdio.h>
int main(){
 int r;
 printf("Enter the number of rows :");
 scanf("%d",&r);
 int c;
 printf("Enter the number of columns :");
 scanf("%d",&c);
 int arr[r][c];
 for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
    printf("\n");
 }
 for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("Enter the numbers :");
        scanf("%d ",arr[i][j]);
    }
    printf("\n");
 }
    return 0;
}