#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    if(num%7==0 && num%3==0)
        printf("%d is divisible by both 7 and 3");
    else
    {
        if(num%7==0)
            printf("%d is divisible by 7");
        else if(num%3==0)
            printf("%d is divisible 3");
        else
            printf("%d is neither divisible by 7 nor 3");
    }

    return 0;
}
