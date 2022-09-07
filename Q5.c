#include<stdio.h>
int main()
{
    int num,re;
    printf("Enter a number :");
    scanf("%d",&num);
    re = num/100;
    if(re>=1 && re<=9)
        printf("%d is Three digit number",num);
    else
        printf("%d is not three digit number",num);
    return 0;
}
