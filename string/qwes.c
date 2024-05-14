//create a string firstname and scondname to store details of user and print all the characters using a looop
#include<stdio.h>

void printString(char arr[]);
int main(){
    char firstName[]= "Sneha";
    char lastName[]= "Chhabra";
    printString(firstName);
    printString(lastName);


}
void printString(char arr[]){
    for(int i=0; arr[i] != '\0';i++ ){
        printf("%c",arr[i]);
    }

   printf("\n");
}