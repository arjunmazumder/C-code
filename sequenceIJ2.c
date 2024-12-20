#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=9;i=i+2)
    {
        for(int j=3;j>0;j--)
        printf("I=%d J=%d\n",i, 4+j);
    }
    return 0;
}
