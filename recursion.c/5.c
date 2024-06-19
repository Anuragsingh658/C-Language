// write a function ton calculate percentage of a student from marks in science maths, science, &sanskrit
#include <stdio.h>
int calculatepercentage(int science, int math, int sanskrit);

int main()
{
    int science = 98;
    int math = 95;
    int sanskrit = 99;
    printf("percentage is :%d", calculatepercentage(science, math, sanskrit));
    return 0;
}
int calculatepercentage(int science, int math, int sanskrit)
{
    return (science + math + sanskrit) / 3;
}