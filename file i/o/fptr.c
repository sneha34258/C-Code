#include<Stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("test.txt","r");
    fclose(fptr);
    return 0;

}


