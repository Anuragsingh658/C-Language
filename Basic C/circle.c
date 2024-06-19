#include <stdio.h>

float squarearea(float side);
float circlearea(float circle);
float rectanglearea(float a, float b);

int main()
{
    float side=50;
    printf("area is %f\n", squarearea(side));

    float rad=20;
    printf("area  is %f\n", circlearea(rad));

    float a = 5.0;
    float b = 10.0;

    printf("area is %f\n", rectanglearea(a, b));
     return 0;

}

float squarearea(float side)
{
    return side * side;
}
float circlearea(float rad)
{
    return 3.14 * rad * rad;
}
float rectanglearea(float a, float b)
{
    return a * b;
}