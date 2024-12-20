#include<stdio.h>
int main()
{
    int x,i,m=1;
    while(1)
    {
        scanf("%d",&x);
        if(x==0)
        {
            break;
        }
        else
        {
            printf("%d",m);
            for(i=m+1;i<=x;i++)
            {
                printf(" %d",i);
            }
        }
        printf("\n");
    }

    return 0;
}
