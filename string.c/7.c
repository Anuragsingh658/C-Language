// strcpy(newstr, oldstr)-copies values of old string to new string.
#include<stdio.h>
#include<string.h>

void printstring(char arr[]);
void countlenght(char arr[]);

int main(){
    char oldstr[]="oldstr";
    char newstr[]="newstr";
    strcpy(newstr, oldstr);
    puts(newstr);
}