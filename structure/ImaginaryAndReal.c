// create a structure to stoe complex numbers.(use arrow operator)
// create a structure to store vectors. Then make a function to return sum of 2 vectors 
#include<stdio.h>
#include<string.h>

struct complex{
    int real;
    int img;
};

int main(){
    struct complex number1={5, 8};
    struct complex *ptr=&number1;
    printf("real part=%d\n", ptr->real);
    printf("img part=%d\n", ptr->img);
    return 0;
}