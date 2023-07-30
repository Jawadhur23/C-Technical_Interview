// TO REVERSE THE ORDER OF ELEMENT
#include<stdio.h>
int reverseArray(int arr[], int length)
{
    int start=0;
    int end= length-1;
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
    int i;
    int arr[]={1,2,4,5,7,8,9,10};
    int length=((sizeof(arr))/sizeof(arr[0]));
    printf("The Elements in the Array:\n");
    for(i=0;i<length;i++)
    {
        printf("%d\n",arr[i]);
    }
    reverseArray(arr,length);
    printf("The Reversed Order of Array: \n");
    for(i=0;i<length;i++)
    {
        printf("%d\n",arr[i]);
    }

}
