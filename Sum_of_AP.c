//Series of AP
#include<stdio.h>
int main()
{
    int a,b,d,tn,i;
    int sum=0;
    printf("Enter the First Element : ");
    scanf("%d",&a);
    printf("Enter the Total Number of Series: ");
    scanf("%d",&b);
    printf("Enter the Difference between Numbers: ");
    scanf("%d",&d);
    //Formula is
    tn=a+(b-1)*d;
    printf("The Series of Expression is: ");
    for(i=a;i<=tn;i=i+d)
    {
        sum+=i;
        if(i!=tn)
        {
            printf("%d,",i);
        }

        else
        {
            printf("%d=%d",i,sum);
        }
    }

}
