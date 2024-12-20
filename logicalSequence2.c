#include<stdio.h>
int main()
{
    int x,y,i,j,m,l;
    scanf("%d %d",&x,&y);
    m=1;
    l=x;
    int k=y/x;
    for(i=1;i<=k;i++)
    {
        printf("%d",m);
        for(j=m+1;j<=l;j++)
        {
            printf(" %d",j);


        }
        m +=x;
        l +=x;
        printf("\n");



    }
    return 0;

}
