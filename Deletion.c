#include<stdio.h>
int main()
{
    //Array Elements Giving
    int a,i;
    printf("Enter the Total Elements of an Array: ");
    scanf("%d",&a);
    printf("The Elements of an array: ");
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    //Deletion
    int pos,num;
    printf("Enter the Number to be Deleted: ");
    scanf("%d",&num);
    printf("Enter the Number position: ");
    scanf("%d",&pos);
    for(i=pos-1;i<=a-1;i++)//initial position - 1 | i<total array element -1 | i++ incrementing the Array
    {
        arr[i]=arr[i+1];//arr[2]=arr[2+1=3]
    }
    a++;
    printf("The New array Element: \n");
    for(i=0;i<a;i++)
    {
        printf("%d\n",arr[i]);
    }
}
