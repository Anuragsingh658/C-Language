// write a program to store the data of 3 students
#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.roll=1664;
    s1.cgpa=9.2;
    strcpy(s1.name, "Anurag");

    printf("student name = %s\n", s1.name);
    printf("student roll no=%d\n", s1.roll);
    printf("student cgpa= %f\n", s1.cgpa);

    struct student s2;
    s2.roll=1662;
    s2.cgpa=8.2;
    strcpy(s2.name, "Ananya");

    printf("student name = %s\n", s2.name);
    printf("student roll no=%d\n", s2.roll);
    printf("student cgpa= %f\n", s2.cgpa);

    struct student s3;
    s3.roll=1660;
    s3.cgpa=8.9;
    strcpy(s3.name, "Ankita");

    printf("student name = %s\n", s3.name);
    printf("student roll no=%d\n", s3.roll);
    printf("student cgpa= %f\n", s3.cgpa);
    return 0;
}