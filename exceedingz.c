#include<stdio.h>
int main()
{
    int x,z,i,count=0,sum=0;
    scanf("%d",&x);
    while(1)
    {
        scanf("%d",&z);
        if(z>x)
        {
            break;
        }
    }
    while(1)
    {
        sum=sum+x;
        x++;
        count++;
        if(sum>z)
        {
            printf("%d\n",count);
            break;
        }
    }
    return 0;
}
