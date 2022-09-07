#include<stdio.h>
int main()
{
    int m_s1,m_s2,m_s3,m_s4,m_s5;

    printf("Enter the marks out of 100 for subject-1 : ");
    scanf("%d",&m_s1);
    printf("Enter the marks out of 100 for subject-2 : ");
    scanf("%d",&m_s2);
    printf("Enter the marks out of 100 for subject-3 : ");
    scanf("%d",&m_s3);
    printf("Enter the marks out of 100 for subject-4 : ");
    scanf("%d",&m_s4);
    printf("Enter the marks out of 100 for subject-5 : ");
    scanf("%d",&m_s5);

    if(m_s1<33 || m_s2<33 ||m_s3<33 || m_s4<33 || m_s5<33)
    {
        printf("Failed");
    }else
    {
        printf("Passed");
    }
    return 0;
}
