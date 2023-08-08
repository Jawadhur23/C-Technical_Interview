//Append the Two Array
#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter the total array of Elements: ");
    scanf("%d",&a);
    printf("The first array elements: ");
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the total array of Elements: ");
    scanf("%d",&b);
    printf("The first array elements: ");
    int arr1[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int size1=sizeof(arr)/sizeof(arr[0]);//Total Length of Array Elements
    int size2=sizeof(arr1)/sizeof(arr1[0]);//Total Length of Array Elements
    int total=size1+size2;//Combining
    int combine[total];//Giving into array
    for(i=0;i<size1;i++)
    {
        combine[i]=arr[i];//Number of Elements in Array passed to Combine
    }
    for(i=0;i<size2;i++)
    {
        combine[size1+i]=arr1[i];//Number of Elements in array1 Combining with Previous array
    }
    printf("The Combined Array is: ");
    for(i=0;i<total;i++)//Reading of Total Array
    {
        printf("%d\n",combine[i]);//Combined array
    }
}
