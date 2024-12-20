#include<stdio.h>
int main()
{
    int n,i,k=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d %d %d PUM\n",k,k+1,k+2);
        k=4*i+1;
    }
    return 0;
}
