#include<stdio.h>
int sumofarray(int* arr, int size)
{
    int i,total=0;
    for(i=0;i<size;i++)
    {
        total+=arr[i];
    }
    return total;
}
int main()
{
    int b,j;
    printf("Enter the Elements: ");
    scanf("%d",&b);
    int arr[b];
    printf("Enter the Elements: ");
    for(j=0;j<b;j++)
    {
        scanf("%d",&arr[j]);
    }
    
    //int arr[]={1,2,3,4,7,54,23,16};
    int size=(sizeof(arr)/sizeof(arr[0]));
    int total=sumofarray(arr,size);
    printf("The Sum of Elements in the Array: %d",total);
}
