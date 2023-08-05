//In this program which calculates GCD and LCM
#include<stdio.h>
int gcd(int a, int b)
{
    while(b!=0)//when b not equal to 0 until it become 0 loop goes
    {
        int temp =b;//example a=36%b=48; which result 36
        b=a%b;//swap will occur a=48%b=36%; a which will remainder 12 & b=36 i.e, a is divider by b
        a=temp;// a=36%b=12 remainder will be a= 0 so by swaping a=12
    }
    return a;
}
int lcm(int a, int b)
{
   int gcd_total=gcd(a,b);//gcd function will be called
   return (a*b)/gcd_total;//if a=12,b=18 than (12*18)/6 i.e.,36
}
int main()
{
    int a,b;
    printf("Enter the Integer: ");
    scanf("%d",&a);//I/P
    printf("Enter the Integer: ");
    scanf("%d",&b);//I/P
    int least_common_multiple=lcm(a,b);//Finding LCM
    int greatest_common_divisor=gcd(a,b);//Finding GCD
    printf("The LCM Value is = %d\n",least_common_multiple);
    printf("The GCD value is = %d\n",greatest_common_divisor);
}
