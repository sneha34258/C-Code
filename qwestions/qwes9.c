#include<stdio.h>
int main(){
    int marks;
    printf("enter number(0-100) : ");
    scanf("%d",&marks);

//     if(marks <= 30){
//         printf("FAIL \n");
//     }else if (marks > 30 && marks <= 100){ 
//         printf("PASS \n");
//     }else {
//         printf("wrong marks");
//     }
marks <= 30 ? printf("FAIL \n") : printf("PASS \n");
 }