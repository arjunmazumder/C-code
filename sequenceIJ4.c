#include<stdio.h>
int main()
{
    float i,j;
    for(i=0;i<=2.2;i=i+0.2)
    {
        for(j=1;j<=3;j++)
        {
            if((i>0 && i<1) || (i>1 && i<2))
            {
                printf("I=%.1f J=%.1f\n",i,j+i);
            }
            else
            {
                printf("I=%d J=%d\n",(int)i,(int)(j+i));
            }
        }

    }
    return 0;
}
