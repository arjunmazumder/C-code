#include<stdio.h>
int main()
{
    int i,j,index;
    printf("Enter Index: \n");
    scanf("%d",&index);
    int arr[index];
    printf("Enter the value: \n");
    for(i=1;i<=index;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=1;j<=index;j++)
    {
        printf("arr[%d] = %d\n",j,arr[j]);
    }
}
