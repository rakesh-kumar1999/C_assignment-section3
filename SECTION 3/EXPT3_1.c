/*Write a program to compute the area of a triangle given its three sides.*/
#include "stdio.h"
#include "math.h"
#include"stdlib.h"
void main()
{
    float s1, s2, s3, area; /*s1=side1, s2=side2,s3=side3 of the triangle*/
    printf("Enter the three sides of the triangle\n");
    scanf("%f %f %f", &s1, &s2, &s3);
    if (s1 < 0 || s2 < 0 || s3 < 0 || (s1 + s2 <= s3) || (s3 + s2 <= s1) || (s1 + s3 <= s2))
    {
        printf("Not a valid triangle");
        exit(0);
    }
    else
    {
        float s = (s1 + s2 + s3) / 2;// s=semiperimeter
        area = sqrt(s * (s - s1) * (s - s2) * (s - s3)); /*sqrt() function defined in <math.h>*/
        printf("Area of the triangle is %f", area);
    }
}