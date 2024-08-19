// #include<stdio.h>
// #include<stdbool.h>
// int main(){
//     int arr[7]={1,3,6,1,1,2,3};
//     int flag = false;
//     for(int i=0;i<=6;i++){
//         bool flag = false;
//         for(int j=i+1;j<=6;j++){
//             if(arr[i]==arr[j]){
//             flag=true;
//             }
//         }
//         if(flag==false){
//         printf("%d is unique number",arr[i]);
//         break;
//         }
      
//     }
//     return 0;
// }


#include<stdio.h>
int main(){
    int arr[7]={1,3,5,5,1,2,7};
    for(int i=0;i<=6;i++){
        for(int j=i+1;j<=6;j++){
            if(arr[i]==arr[j]){
                i++;
                j=i+1;
            }
        }
        
            printf("%d is unique number",arr[i]);
            break;
        }
         return 0;
    }