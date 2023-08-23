#include<stdio.h>
    void printnumtoword(int num)
    {
        char *ones[]={"","one","two","three","four","five","six","seven","eight","nine"};
        char *teens[]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
        char *tens[]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
        if(num>=1 && num<=9)
        {
            printf("%s",ones[num]);
        }
        else if(num>=11 && num<=19)
        {
            printf("%s",teens[num-10]);
        }
        else if(num>=20 && num<=99)
        {
            printf("%s",tens[num/10]);
            if(num%10!=0)
            {
                printf("%s\n",ones[num%10]);
            }
        }
    }
    void numtoword(int num)
    {
        if(num==0)
        {
            printf("Zero\n");
        }
        else if(num>=100)
        {
            printnumtoword(num/100);
            printf("Hundred");
            num%=100;
        }
        else if(num>=1000)
        {
            printnumtoword(num/1000);
            printf("Thousand");
            num%=1000;
        }
        else if(num>=10000)
        {
            printnumtoword(num/10000);
            printf("Ten Thousand\n");
            num%=10000;
        }
        else if(num>=100000)
        {
            printnumtoword(num/100000);
            printf("Lakh");
            num%=100000;
        }
        else if(num>=1000000)
        {
            printnumtoword(num/1000000);
            printf("Crore");
            num%=1000000;
        }
        if(num>0)
        {
            printnumtoword(num);
        }
    }
    int main()
    {
        int num;
        printf("Enter the Integer: ");
        scanf("%d",&num);
        numtoword(num);
        return 0;
    }
