// intialising structure
#include<stdio.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1={1664, 9.2, "Anurag"};
    printf("student roll= %d\n", s1.roll);

    return 0;
}