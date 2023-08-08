//Udemy Challenge Calculate the Length of the String using Pointer
#include<stdio.h>
#include<string.h>
int length(char* name)
{
    int i=0,count=0;
    while(name[i]!=0)//name[i]!=0 until it becomes it 0
    {
        count++;//count one by one value
        i++;//moving to Next Value
    }
    printf("The Length of the String: %dTh",count);
}
int main()
{
    char name[100];//we can take maximum aray of 100 elements
    printf("Enter the String: ");
    //scanf("%s",name);//we can use scanf but we cannot print the spacing statements
    gets(name);//Get the name from user
    length(&name);
}
