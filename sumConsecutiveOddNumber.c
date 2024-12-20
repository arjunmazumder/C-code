#include<stdio.h>
int main()
{
    int num1,i,num2,Lnum,Snum,sum=0;
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
        Lnum=num1;
        Snum=num2;
    }
    else
    {
        Lnum=num2;
        Snum=num1;
    }
    for(i=Snum+1;i<Lnum;i++)
    {
        if(i%2 != 0)
        {
            sum=sum+i;
        }
    }
    printf("%d\n",sum);


 return 0;
}
