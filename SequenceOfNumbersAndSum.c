#include<stdio.h>
int main()
{
    int num1,num2,sum=0,larN,smalN;
    while(1)
    {
        scanf("%d%d",&num1,&num2);
        if(num1<=0 || num2<=0)
        {
            break;
        }
        else
        {
            if(num1>num2)
            {
                larN=num1;
                smalN=num2;
            }
            else
            {
                larN=num2;
                smalN=num1;
            }
            for(int i=smalN;i<=larN;i++)
            {
                printf("%d ",i);
                sum=sum+i;
            }
            printf("Sum=%d\n",sum);
            sum=0;

        }

    }
    return 0;
}
