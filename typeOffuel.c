#include<stdio.h>
int main()
{
    int n,alc=0,gas=0,dis=0;

    while(1)
    {
        scanf("%d",&n);
        if(n>=1 && n<=4)
        {
            switch(n)
            {
            case 1:
                alc++;
                break;
            case 2:
                gas++;
                break;
            case 3:
                dis++;
                break;
            case 4:
                goto DIU;
                //exit(0);
                break;

            }

        }
        else
        {
            continue;
        }
    }
    DIU:
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",alc);
    printf("Gasolina: %d\n",gas);
    printf("Diesel: %d\n",dis);

    return 0;
}
