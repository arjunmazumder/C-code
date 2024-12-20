#include<stdio.h>
int main()
{
    int count=0;
    for(int i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
            count++;
        }
    }
    printf("\n\nEven Number: %d\n\n",count);
    count=0;
    for(int i=1;i<=100;i++)
    {
        if(i%2 != 0)
        {
            count++;
        }
    }
    printf("\n\n Odd Number: %d\n\n",count);
    return 0;
}
