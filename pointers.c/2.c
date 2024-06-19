// format specifier
#include <stdio.h>
int main()
{
    int age = 22;
    int *ptr = &age;

    //adress
    printf("%u\n", &age);// format specifier
    printf("%u\n", ptr);// format specifier
    printf("%u\n", &ptr);// format specifier
    return 0;
}
