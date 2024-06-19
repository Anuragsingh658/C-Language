#include <stdio.h>
int main()
{
    float price = 22;
    float *ptr = &price;
    printf("ptr=%u\n", ptr);
    ptr++;
    printf("ptr=%u\n", ptr);
    ptr--;
    printf("ptr=%u\n", ptr);
    return 0;
}