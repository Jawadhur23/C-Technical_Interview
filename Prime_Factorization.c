#include<stdio.h>
int main()
{
    int a,i;
    printf("Enter the Elements: ");
    scanf("%d",&a);
    printf("The Prime Factorization of the Number is: \n");
    while(a%2==0)
    {
        printf("%d",2);
        a=a/2;
    }
    for(i=3;i<=sqrt(a);i+=2)
    {
        if(a%i==0)
        {
            printf("%d",i);
            a=a/2;
        }
    }
    if(a>2)
    {
        printf("%d",a);
    }
}
