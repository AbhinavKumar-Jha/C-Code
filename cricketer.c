#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        char name[15];
        int age;
        int noOfMatch;
        float average;
    } cricketer;

    // 3 cricketers
    cricketer arr[3];
    for(int i=0;i<3;i++){
    scanf("%s",arr[i].name);
    scanf("%d",&arr[i].age);
    scanf("%d",&arr[i].noOfMatch);
    scanf("%f",&arr[i].average);
    }

    for(int i=0;i<3;i++){
    printf("Name :%s\n",arr[i].name);
    printf("Age :%d\n",arr[i].age);
    printf("Number of matches :%d\n",arr[i].noOfMatch);
    printf("Average :%f\n",arr[i].average);
    printf("\n");
    }


    return 0;
}