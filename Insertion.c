#include<stdio.h>
int main()
{
    int a,i;
    printf("Enter the Total Element in array:\n ");
    scanf("%d",&a);
    int arr[a];
    printf("Enter the Elements for the Array:\n ");
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    //Insertion
    int pos,num;
    printf("The Data of the Element: ");
    scanf("%d",&num);//Number what we have to include
    printf("The position of the Element: ");
    scanf("%d",&pos);//Position we need to include
    if(pos<=0 || pos>a+1)
    {
        printf("Invalid Data\n");
    }
    else
    {
        for(i=a-1;i>=pos-1;i--)//n-1 -> Total data | from given position-1 to increasing upto array | i-- a-1 element
        {
            arr[i+1]=arr[i];//i =4 arr[4+1=5]=arr[4] | i=3 arr[3+1=4]=arr[3]
        }
        arr[pos-1]=num;//keeping the number in arr[pos-1]
        a++;//incrementing
    }
    printf("The Array after Insertion: ");
    for(i=0;i<a;i++)
        {
            printf("%d\n",arr[i]);//printing
        }
        return 0;
}


