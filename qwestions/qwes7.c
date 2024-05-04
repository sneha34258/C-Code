// 18 and vote 
#include<stdio.h>
int main(){
    int age;
    printf("enter age : ");
    scanf("%d", &age);

    age >=18 ? printf("adult \n") : printf("not adult \n");

    // if(age > 18) {
    //     printf("adult \n");
    //     printf("they can vote \n");
    //     printf("they can drive \n");
    // }
    
    // else {
    //     printf("not adult \n");
    //     printf("they can't vote");
    //     printf(" they can't drive");
    // }
    return 0;
}