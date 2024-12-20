#include<stdio.h>
int main()
{
    double num1,num2,media;
    int x;
    while(1)
    {
        while(1)
        {
            scanf("%lf",&num1);
            if(num1<0 || num1>10)
            {
                printf("nota invalida\n");
            }
            else
            {
                break;
            }
        }

        while(1)
        {
            scanf("%lf",&num2);
            if(num2<0 || num2>10)
            {
                printf("nota invalida\n");
            }
            else
            {
                break;
            }
        }
        media=(num1+num2)/2;
        printf("media = %.2lf\n",media);
        while(1)
        {
            scanf("%d",&x);
            if(x<1 || x>2)
            {
                printf("novo calculo (1-sim 2-nao)\n");
            }
            else
            {
                printf("novo calculo (1-sim 2-nao)\n");
                break;
            }
        }

        if(x==2)
            break;



    }
    return 0;
}
