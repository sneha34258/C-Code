#include<stdio.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};

void printInfo(struct student s1);

int main(){
    struct student s1 = {1664, 9.2, "sneha"};
printInfo(s1);
 printf("student.roll = %d\n", s1.roll);
    return 0;

}
void printInfo(struct student s1){
    printf("student information : \n");
 printf("student.roll = %d\n", s1.roll);
        printf("student.roll = %s\n", s1.name);
            printf("student.roll = %f\n", s1.cgpa);

            s1.roll = 1660;

}