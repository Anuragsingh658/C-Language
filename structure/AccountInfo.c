// make a structure to store bank account informationn of a customer of ABC Bank. also, make an alias for it.
#include<stdio.h>
#include<string.h>

typedef struct BankAccount{
    int accountNo;
    char name[100];
} acc ;

int main(){
    acc acc1 = {123, "Anurag"};
    acc acc2 = {124, "Ankita"};
    acc acc3 = {125, "Ananya"};

    printf("acc no = %d\n", acc1.accountNo);
    printf("name = %s\n", acc1.name);
    return 0;
} 