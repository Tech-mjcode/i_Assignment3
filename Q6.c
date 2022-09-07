#include<stdio.h>
int main()
{
    int num1,num2,big;
    printf("Enter two numbers :");
    scanf("%d %d",&num1,&num2);
    if(num1==num2)
        printf(" %d and %d are same number",num1,num2);
    else
    {
        if(num1>num2)
            printf("Big number is : %d",num1);
        else
            printf("Big number is : %d",num2);
    }
    return 0;
}
