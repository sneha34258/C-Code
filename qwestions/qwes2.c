// check the given no. is odd or even
#include<stdio.h>
int main(){
    // even -> 1
    // odd -> 0
    int a;
    printf("enter a number ");
    scanf("%d",&a);
    printf("%d", a % 2 == 0);
}