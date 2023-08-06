//Armstrong Number
#include<stdio.h>
int main()
{
    int a,r,sum;
    printf("Enter the Integer: ");
    scanf("%d",&a);
    int temp=a;
    while(a>0)
    {
        r=a%10;//153 i.e, Iteration 1: r=3 ;Iteration 2:15 r=5; Iteration 3: last digit 1
        sum=sum+(r*r*r);//27 125 1
        printf("%d\n",sum);//27+125+1
        a=a/10;//153/10=quotient->15
    }
    if(temp==sum)
    {
        printf("The Number is Armstrong Number");
    }
    else{
        printf("The Number is not a Armstrong Number");
    }

}
