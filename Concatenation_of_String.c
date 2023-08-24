/*
//Concatenation of String
#include<stdio.h>
#include<string.h>
int main()
{
    int c;
    char name[20];
    printf("Enter the String: ");
    gets(name);
    char name1[12];
    printf("Enter the String 2: ");
    gets(name1);
    c=strcat(name,name1);//name-Destination, name1-source
    printf("%s",c);
    //if char name[6] & char name [5] while appending it will combine both string array but output will come but it cause buffer Overflow
}*/
//Concatenation of String without string.h
#include<stdio.h>
int main()
{
    int len1,len2,i;
    char name[30];
    printf("Enter the First String : ");
    gets(name);
    char name1[30];
    printf("Enter the next String: ");
    gets(name1);
    len1=strlen(name);
    len2=strlen(name1);
    for(i=0;i<len2;i++)
    {
        name[len1+i]=name1[i];
    }
        printf("%s\n",name);
        puts(name1);

}
