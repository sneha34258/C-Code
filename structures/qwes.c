#include<stdio.h>
struct student {
    int roll;
    float cgpa;
    char name[100];
};
int main(){
struct student s1;
s1.roll= 1664;
s1.cgpa=9.2;
// s1.name = "sneha"
strcpy(s1.name , "sneha");

printf("student name = %s\n",s1.name);
printf("srudent roll no = %d\n",s1.roll);
printf("student cgpa = %f\n", s1.cgpa);


struct student s2;
s2.roll= 1634;
s2.cgpa=9.9;
// s2.name = "ankita"
strcpy(s2.name , "ankita");

printf("student name = %s\n",s2.name);
printf("srudent roll no = %d\n",s2.roll);
printf("student cgpa = %f\n", s2.cgpa);

struct student s3;
s3.roll= 1264;
s3.cgpa=9.7;
// s3.name = "gagan"
strcpy(s3.name , "gagan");

printf("student name = %s\n",s3.name);
printf("srudent roll no = %d\n",s3.roll);
printf("student cgpa = %f\n", s3.cgpa);

return 0;
}