// enter adress(house no, block, city, state) of 5 people.
#include<stdio.h>
#include<string.h>

struct adress{
    int house;
    int block;
    char city[100];
    char state[100];
};

int main(){
    struct adress s1={13, 9, "Gorakhpur", "UttarPradesh"};
    printf("adress of house=%d\n", s1.house);
    printf("adress of block=%d\n", s1.block);
    printf("adress of city=%s\n", s1.city);
    printf("adress of statee=%s\n", s1.state);

    struct adress s2={14, 10, "Gorakhpur", "UttarPradesh"};
    printf("adress of house=%d\n", s2.house);
    printf("adress of block=%d\n", s2.block);
    printf("adress of city=%s\n", s2.city);
    printf("adress of statee=%s\n", s2.state);

    struct adress s3={15, 11, "Gorakhpur", "UttarPradesh"};
    printf("adress of house=%d\n", s3.house);
    printf("adress of block=%d\n", s3.block);
    printf("adress of city=%s\n", s3.city);
    printf("adress of statee=%s\n", s3.state);

    struct adress s4={16, 12, "Gorakhpur", "UttarPradesh"};
    printf("adress of house=%d\n", s4.house);
    printf("adress of block=%d\n", s4.block);
    printf("adress of city=%s\n", s4.city);
    printf("adress of statee=%s\n", s4.state);

    struct adress s5={17, 13, "Gorakhpur", "UttarPradesh"};
    printf("adress of house=%d\n", s5.house);
    printf("adress of block=%d\n", s5.block);
    printf("adress of city=%s\n", s5.city);
    printf("adress of statee=%s\n", s5.state);
}