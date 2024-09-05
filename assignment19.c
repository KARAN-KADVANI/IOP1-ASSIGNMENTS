/*PROGRAM TO READ A CHARACTER AND CHECK WHETHER IT IS A SMALL
CASE LETTER OR NOT USING CONDATIONAL OPERATOR*/

#include <stdio.h>
int main()

{
    char ch;
    printf("enter the letter :-");
    scanf("%c", &ch);

    if (ch >= 97 && ch <= 122)
        printf("you have entered a small case letter");

    else
        printf("you have not entered a small case letter");
}