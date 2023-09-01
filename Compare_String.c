/*
#include<stdio.h>
#include<string.h>
int main()
{
    char a1[20];
    printf("Enter the String 1: ");
    gets(a1);
    char a2[20];
    printf("Enter the String 2: ");
    gets(a2);
    int c=strcmp(a1,a2);
    if(c==0)
    {
        printf("It is Same");
    }
    else{
        printf("It is not Same");
    }
}
*/
#include<stdio.h>
int main()
{
    int i,flag=0;
    char a1[]="Jawadhur";
    char a2[]="JaWadhur";
    for(i=0;a1[i]!='\0'||a2[i]!='\0';i++)
    {
        if(a1[i]!=a2[i])
        {
            flag=1;
            break;
        }
    }
        if(flag==0)
        {
            printf("It is same");
        }
        else{
            printf("It is not same");
        }

}
