//find the salted form of password entered by user if the salt is "123" & addes at the end
#include<stdio.h>
void salting(char password[]);
int main(){
    char password[100];
    scanf("%s",password);
    salting(password);

    
    return 0;
    
    }

void salting(char password[]){
    char salt[]="123";
    char newPass[200];
    strcpy(newPass , password);
    strcat(newPass,salt);
    puts(newPass);

}