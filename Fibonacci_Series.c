//Fibonacci Series
#include<stdio.h>
int main()
{
    int a1=0,a2=1,a3,z,i;
    printf("Enter the Element: ");
    scanf("%d",&z);//how many elements we need
    for(i=2;i<z;i++)//since we have given a1,a2 it starts from 2
    {
        a3=a1+a2;//adding
        a1=a2;
        a2=a3;
        printf("%d\n",a3);

    }

}
