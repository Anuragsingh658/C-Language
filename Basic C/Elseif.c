#include<stdio.h>

int main() {
    int age;
    printf("enter your age\n");
    scanf("%d", &age);

    if(age>=18){
        printf("you can run");
    }
    else if(age>=10){
        printf("you can walk");
    }
    else{
        printf("you cannot walk");
    }
    return 0;
}