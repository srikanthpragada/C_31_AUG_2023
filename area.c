// Program to display area of a circle with given radius
// Date : 04-sep-2023

#include <stdio.h>

void main()
{
 float radius, area;

    // Input
    printf("Enter radius :");
    scanf("%f", &radius);

    // Process
    area = 3.14 * radius *  radius;

    // Output
    printf("Area of a circle with radius %f is %f", radius, area);

}
