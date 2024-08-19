
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         printf("Hello Abhinav \n");
//     }
//     return 0;
// }
    



/*GP 100,50,25.....upto n terms*/
#include<stdio.h>
int main(){
    float n;
    printf("Enter a number :");
    scanf("%f",&n);
    float a=100;
    for(int i=1;i<=n;i++){
        printf("%f ",a);
        a=a-a/2;
    }
    return 0;
}















