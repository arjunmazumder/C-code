#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
             printf("NULL\n");
        }
        if(a[i]<0 && a[i]%2!=0)
        {
            printf("ODD NEGATIVE\n");
        }
        if(a[i]>0 && a[i]%2!=0)
        {
            printf("ODD POSITIVE\n");
        }
        if(a[i]<0 && a[i]%2==0)
        {
            printf("EVEN NEGATIVE\n");
        }
        if(a[i]>0 && a[i]%2==0)
        {
            printf("EVEN POSITIVE\n");
        }
    }
    return 0;
}
