#include <stdio.h>
/*%d - integer
%c - charcter
%f - float
%l - long
%lf - double
%LF - long double
*/
int main () {

    int a = 8;
    float b= 7.333;

    printf("%19.5f\n", b);
    printf("%-19.5f\n", b);
    return 0;
}