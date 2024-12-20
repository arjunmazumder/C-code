#include<stdio.h>
int main()
{
    int a[5],i,larN=0,posi;
    for(i=1;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=5;i++)
    {
        if(larN<a[i])
        {
            larN=a[i];
            posi=i;
        }
    }
    printf("%d\n",larN);
    printf("%d\n",posi);
    return 0;

}
