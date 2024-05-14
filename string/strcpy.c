#include<stdio.h>
int main(){
    char oldStr[]="oldStr";
    char newStr[]="newStr";
    strcpy(newStr, oldStr);
    puts(newStr);


    return 0;
}