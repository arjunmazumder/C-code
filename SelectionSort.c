#include<stdio.h>
void SelectionSort(int arr[],int n)
{
    int i,j,k;
    for(i=0;i<n-1;i++)
    {
        for(j=k=i;j<n;j++)
        {
            if(arr[j]<arr[k])
            {
                k=j;
            }
        }
        swap(&arr[i],&arr[k]);
    }
}
void swap(int *a, int *b)
{
    int emty;
    emty=*a;
    *a=*b;
    *b=emty;
}
int main()
{
    int arr[]={20,12,10,15,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr, n);
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}
