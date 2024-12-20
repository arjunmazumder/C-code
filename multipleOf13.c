#include<stdio.h>
int main()
{
    int num1,num2,largN,smallN,sum=0,i;
    scanf("%d",&num1);
    scanf("%d",&num2);
    if(num1>num2)
    {
        largN=num1;
        smallN=num2;
    }
    else
    {
        largN=num2;
        smallN=num1;

    }
    for(i=smallN;i<=largN;i++)
    {
        if(i%13!=0)
        {
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
