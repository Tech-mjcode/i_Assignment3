#include<stdio.h>
int main()
{
    int num,re;
    printf("Enter a number :");
    scanf("%d",&num);
    re=num&1;
    if(re==1){
        printf("%d is a Odd Number",num);
    }
    else
        printf("%d is a even number",num);
}
