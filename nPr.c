//Performing Permutation
//Formula is n!/(n-r)!
#include<stdio.h>
int fact(int n)
{
    int total;
    if(n==0)
    {
        return 1;
    }
    else
    {
         return n*fact(n-1);//recursion happening
    }
}
int permut(int n,int r)
{
    int total;
    if(n<r)
    {
        return 1;
    }
    else
    {
        return fact(n)/fact(n-r);
    }
}
int main()
{
    int c,d,n,r;
    printf("Enter the n Element:");
    scanf("%d",&n);
    printf("Enter the r Element: ");
    scanf("%d",&r);
    d=permut(n,r);
    printf("%d",d);
}
