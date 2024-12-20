#include<stdio.h>
int main()
{
    int x,y,i,ln,sn;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x>y)
    {
        ln=x;
        sn=y;
    }
    else
    {
        ln=y;
        sn=x;
    }
    for(i=sn+1;i<ln;i++)
    {
        if(i%5==2 || i%5==3)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
