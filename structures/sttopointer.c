#include<stdio.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1 = {1664, 9.2, "sneha"};
    printf("student roll = %d\n",s1.roll);
    struct student *ptr = &s1;
    printf("student roll = %d\n", (*ptr).roll);
    printf("student->roll = %d\n", ptr->roll);
    return 0;

}