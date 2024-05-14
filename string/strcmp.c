#include<stdio.h>
int main(){
    char firstStr[]= "apple";
    char secStr[]="banana";
    printf("%d\n", strcmp(firstStr, secStr));

    char first2Str[]= "apple";
    char sec2Str[]="apple";
    printf("%d\n", strcmp(first2Str, sec2Str));

    char first1Str[]= "HHHB";
    char sec1Str[]="HHHA";
    printf("%d\n", strcmp(first1Str, sec1Str));


    return 0;
}