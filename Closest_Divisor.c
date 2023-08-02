//Closest Number Divisor
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the Divident Element: ");//inside the divisor
    scanf("%d",&a);
    printf("Enter the Divisor Element: ");//represent at outside
    scanf("%d",&b);
    int quotient=a/b;
    int near1=b*quotient;
    int near2=b*(quotient+1);
    if(abs(a-near1)==abs(a-near2))
    {
        if(abs(a-near1)>=abs(a-near2))
            printf("The Divident %d which has Divisor %d which is close to:%d",a,b,near1);
        else
            printf("The Divident %d which has Divisor %d which is close to:%d",a,b,near2);
    }
    else if(abs(a-near1)<(abs(a-near2)))
    {
        printf("The Divident %d which has Divisor %d which is close to:%d ",a,b,near1);
    }
    else
    {
        printf("The Divident %d which has Divisor %d which is close to:%d ",a,b,near2);
    }
    return 0;
}
