#include<stdio.h>
int reverse_Array(int arr[], int length)
{
    int start=0;
    int end=length-1;
    while(start<end)
    {
        int temp=start[arr];
        start[arr]=end[arr];
        end[arr]=temp;
        start++;
        end--;
    }
}
int main()
{
    int i,j;
    int arr[]={1,2,4,5,7,2,9,5,12,6,8,3,3,6};
    int length=(sizeof(arr)/sizeof(arr[0]));
    printf("The Elements in the Array: \n ");
    for(i=0;i<length;i++)
    {
        printf("%d\n",arr[i]);
    }
    reverse_Array(arr, length);
    printf("The Reverse order of Elements: \n");
    for(i=0;i<length;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("Duplicate Elements in the array: \n");
    for(i=0;i<length;i++)
    {
        for(j=i+1;j<length;j++)
        {
            if(arr[i]==arr[j])
                printf("%d\n",arr[j]);
        }
    }
}
