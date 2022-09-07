#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Alphabet : ");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    {
        printf("%c is uppercase",ch);
    }else if(ch>=97 && ch<=122)
    {
        printf("%c is lowercase",ch);
    }else
        printf("Enter valid alphabat");

    return 0;
}
