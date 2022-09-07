 #include<stdio.h>
 int main()
 {
     int a,b,c;
     printf("Enter the length of First side of Triangle : ");
     scanf("%d",&a);
     printf("Enter the length of Second side of Triangle : ");
     scanf("%d",&b);
     printf("Enter the length of Third side of Triangle : ");
     scanf("%d",&c);

     if(a+b>c && b+c>a && a+c>b)
        printf("Valid length of a triangle.");
     else
        printf("Not valid length.");
     return 0;

 }
