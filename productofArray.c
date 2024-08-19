// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number of arrays :");
//     scanf("%d",&n);
//     int arr[n];
//     int product=1;
//     for(int i=0;i<=n-1;i++){
//          printf("Enter the numers :");
//         scanf("%d",&arr[n]);
//     }
//     for(int i=0;i<=n-1;i++){
//     product=product*arr[n];
//     }
//     printf("%d",product);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int arr[3]={5,5,5};
//     int product=1;
//     for(int i=0;i<3;i++){
//         product= product*arr[i];
//     }
//     printf("%d",product);
//     return 0;
// }





#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of arrays :");
    scanf("%d",&n);
    int arr[n];
    int product=1;
    for(int i=0;i<=n-1;i++){
        printf("Enter the numbers :");
        scanf("%d",&arr[n]);
    }
    for(int i=0;i<=n-1;i++){
       product=product*arr[n];
}
    printf("%d",product); 
    return 0;
}