#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
        printf("%c is Uppercase.",ch);
    else if(ch>=97 && ch<=122)
        printf("%c is lowerCase",ch);
    else if(ch>=48 && ch<=57)
        printf("%c is a digit",ch);
    else
        printf("Special character.");
    return 0;
}
