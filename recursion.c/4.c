// write a function to convert celsius to farenhite?
#include <stdio.h>
float converttemp(float celsius);

int main()
{
    float far = converttemp(37);
    printf("far is:%f", far);
    return 0;
}
float converttemp(float celsius)
{
    float far = celsius * (9.0 / 5.0) + 32;
    return far;
}