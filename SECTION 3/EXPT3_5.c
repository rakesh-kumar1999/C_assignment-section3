/*Write a program to read a four-digit integer and print the sum of its digits. [Hint: Use /
and % operators.]*/
#include "stdio.h"
void main()
{
    int num, rem, sum = 0;
    printf("Enter  a four digit integer\n");
    scanf("%d", &num);
    rem = num % 10;
    num = num / 10;
    sum = sum + rem;
    rem = num % 10;
    num = num / 10;
    sum = sum + rem;
    rem = num % 10;
    num = num / 10;
    sum = sum + rem;
    rem = num % 10;
    num = num / 10;
    sum = sum + rem;
    printf("sum of its digits %d", sum);
}