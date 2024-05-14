#include<stdio.h>
int countVowels(char str[]);
int main(){
    char str[] = "helloworld";
    printf("vowels are : %d ", countVowels(str));


    return 0;
}
int countVowels(char str[]){
    int count =0;
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'u' || str[i] == 'o' || str[i] == 'i'){
            count++;
        }

    }
    return count;
}