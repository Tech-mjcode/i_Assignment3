#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number :");
    scanf("%d",&num);
    if(num==0)
        printf("%d is not divisible by 5",num);
    else
    {
        if(num%5==0)
            printf("%d is divisible by 5",num);
        else
            printf("%d is a not divisible by 5",num);
    }

    return 0;
}
