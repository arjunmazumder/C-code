#include<stdio.h>
int main()
{
    int a[5],i,eCount=0,oCount=0,pCount=0,nCount=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]%2 == 0)
        {
            eCount++;
        }
        if(a[i]%2 != 0)
        {
            oCount++;
        }
        if(a[i]> 0)
        {
            pCount++;
        }
        if(a[i]< 0)
        {
            nCount++;
        }

    }
        printf("%d valor(es) par(es)\n",eCount);
        printf("%d valor(es) impar(es)\n",oCount);
        printf("%d valor(es) positivo(s)\n",pCount);
        printf("%d valor(es) negativo(s)\n",nCount);
return 0;
}
