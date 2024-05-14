#include<stdio.h>
int main(){
    char *canChange = "Hello world";
    puts(canChange);
    canChange = "Hello";
    puts(canChange);

    char cannotChange[] = "hello world";
    puts(cannotChange);
   // cannotChange="hello";
    puts(cannotChange);

    return 0;
}