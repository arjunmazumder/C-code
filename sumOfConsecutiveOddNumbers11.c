#include<stdio.h>
int main()
{
    int n,i,j,num1,num2,OddSum=0;
    int larN,smalN;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&num1,&num2);
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
        for(j=smalN+1;j<larN;j++)
        {
            if(j%2 !=0)
            {
                OddSum=OddSum+j;

            }
        }
        printf("%d\n",OddSum);
        OddSum=0;


    }
    return 0;
}
