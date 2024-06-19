//strcmp(firststr, secstr)-->compares 2 strings
#include<stdio.h>
#include<string.h>

void printstring(char arr[]);
int countlenght(char arr[]);

int main(){
    char firststr[]="apple";
    char secstr[]="banana";
    printf("%d", strcmp(firststr, secstr));
}