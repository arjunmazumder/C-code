#include<stdio.h>
int main()
{
    int i,a[5],count=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]%2 == 0)
        {
            count++;
        }
    }
    printf("%d valores pares\n",count);
return 0;


}
