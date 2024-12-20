#include<stdio.h>
int main()
{
    int n,count1=0,count2=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>=10 && a[i]<=20)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    printf("%d in\n",count1);
    printf("%d out\n",count2);
    return 0;
}
