#include<stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void heapify(int arr[], int n, int i)
{
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    if(left<n && arr[left] > arr[largest])
    {
        largest=left;

    }
    if(right<n && arr[right] > arr[largest])
    {
        largest=right;
    }
    if(largest !=i)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr,n,largest);
    }

}
void heapSort(int arr[], int n)
{
    for(int i=n/2; i>1;i--)
    {
        heapify(arr,n,i);
    }
    for(int i=n;i>=1;i--)
    {
        swap(&arr[1],&arr[i]);
        heapify(arr,i,1);
    }
}
int main()
{
    int arr[]={0,2,8,9,47,65,10,55,3,66};
    int n = 10-1;
    heapSort(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
}
