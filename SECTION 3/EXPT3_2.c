/*: Write a program to take a number as input and check whether it is even or odd using 
conditional operator (do not use if statement).
*/
#include"stdio.h"
void main()
{   int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    (num%2==0)?(printf("Your number is EVEN")):(printf("Your number is ODD"));
}