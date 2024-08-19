// #include<stdio.h>
// int main(){
//     for(int i=1;i<=100;i++){
//         if(i%2==0) printf("%d ",i);
//     }
//     return 0;
// }
  

  #include<stdio.h>
int main(){
    for(int i=1;i<=100;i=i+2){
        if(i%2!=0) printf("%d ",i);
    }
    return 0;
}
  