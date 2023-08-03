//Program for Pushing of an Array to the left when we give input how many position that shift should occur that much time shift should Occur
#include<stdio.h>
int reverse_arr(int arr[],int start, int end)//start=0
{
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;//increment
        end--;//decrement
    }

}
int rotate_arr(int arr[], int D,int N)
{
    D=D%N; //D - number of Positions , N - total element in array
    reverse_arr(arr,0,N-1);//Rotating the Array
    reverse_arr(arr,0,N-D-1);//Rotating First part of the Array
    reverse_arr(arr,N-D,N-1);//Rotating Second part of the Array
}
int print_arr(int arr[],int N)
{

    for(int i=0;i<N;i++)
    {
        printf("%d ",arr[i]);//fetching the element

    }

}
int main()
{
    int N,D;
    printf("Enter the total array Element:\n");
    scanf("%d",&N);
    int arr[N];//total elements in array
    printf("Enter the input for the array:\n");
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the Element How many position array should shift:");
    scanf("%d",&D);
    rotate_arr(arr,D,N);
    printf("The array Element after shifting the array position %d : ",D);
    print_arr(arr,N);
    return 0;
}
