#include<stdio.h>
int main(){
    char firstStr[100]="hello";
    char secondStr[]="world";
    strcat(firstStr, secondStr);
    puts(firstStr);



    return 0;
}