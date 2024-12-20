#include<stdio.h>
int main()
{
    int a[3];
    int b[3];
    int i,j,k;
    int temp;

    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }

    for(i=0;i<3-1;i++)
    {
        for( j=k=i;j<3;j++)
        {

            if(a[j]<a[k])
            {
                k=j;

            }
        }
                temp=a[i];
                a[i]=a[k];
                a[k]=temp;
    }

    for(i=0;i<3;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        printf("%d\n",b[i]);
    }
    return 0;
}
