// strcat(firststr, secstr)-->concatenates first string with second string
#include<stdio.h>
#include<string.h>

void printstring(char arr[]);
void countlenght(char arr[]);

int main(){
    char firststr[100]="helllo ";
    char secstring[]="world";
    strcat(firststr, secstring);
    puts(firststr);
}