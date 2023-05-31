/*Write a program to input a character and check whether it is in upper case or lower case
using conditional operator. [Hint: compare against the ASCII range.]*/
#include "stdio.h"
void main()
{
    char ch;
    printf("Enter a character\n");
    scanf("%c", &ch);
    if /*((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))*/ ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        (ch >= 65 && ch <= 90) ? (printf("Entered character is uppercase char")) : (printf("Entered character is lowercase char"));
    else
        printf("\nEntered character is a digit or special character but not a uppercase or lowercase.");
}