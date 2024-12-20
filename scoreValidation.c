#include<stdio.h>
int main()
{
    float num;
    float a[2];
    int i=0;
    while(1)
    {
        scanf("%f",&num);
        if(num<0 || num>10)
        {
            printf("nota invalida\n");
        }
        else
        {
            a[i]=num;
            i++;
            if(i>1)
             break;
        }
    }
    printf("media = %.2f\n",(a[0]+a[1])/2);
    return 0;
}
