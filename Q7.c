#include<stdio.h>
int main()
{
    int c_x2,c_x,cons,dis;
    printf("Enter the coefficient of x^2 : ");
    scanf("%d",&c_x2);
    printf("Enter the coefficient of x : ");
    scanf("%d",&c_x);
    printf("Enter the Constant term : ");
    scanf("%d",&cons);
    dis = (c_x*c_x) - (4*c_x2*cons);
    if(dis==0)
        printf("Roots are real and equal");
    else if(dis>0)
        printf("Roots are real and disticnt");
    else
        printf("Roots are imaginary");
    return 0;
}
