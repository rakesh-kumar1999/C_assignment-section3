/*Write a program to input a character and check whether it is a vowel or consonant using 
conditional operator. [Hint: compare against the ASCII range.]*/
#include"stdio.h"
void main()
{  
    char ch;
    printf("Enter a character\n");
    scanf("%c", &ch);
   (ch==65||ch==97||ch==69||ch==101||ch==105||ch==73||ch==111||ch==79||ch==117||ch==85) ? printf("entered character is vowel"):printf("entered character is a consonant.");
}