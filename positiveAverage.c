#include<stdio.h>
int main()
{
    float a[6],sum=0;
    int i,count=0;
    for(i=0;i<6;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<6;i++)
    {
        if(a[i]>0)
        {
            count++;
            sum=sum+a[i];
        }
    }
    printf("%d valores positivos\n",count);
    printf("%0.1f",sum/count);
    return 0;
}
