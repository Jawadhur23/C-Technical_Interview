#include<stdio.h>
//n!
int fact(int n)
{
    int total;
    if(n==0)
    {
        return 1;
    }
    else
    {
        total=n*fact(n-1);
    }
}
//r!
int combi(int r)
{
    int total;
    if(r==0)
    {
        return 1;
    }
    else
    {
        total=r*fact(r-1);
    }
}
//(n-r)!
int permut(int n, int r)
{
    if(n<r)
    {
        return 1;
    }
    else
    {
        //n!/((n-r)!*r!)
        return fact(n)/(fact(n-r)*combi(r)) ;
    }
}
int main()
{
    int n,r,c;
    printf("Enter the Number: ");
    scanf("%d",&n);
    printf("Enter the Number: ");
    scanf("%d",&r);
    c=permut(n,r);
    printf("%d\n",c);
}
