#include<stdio.h>
int factorial(int a)
{
    if(a==0)
    {
        return 1;
    }
    else
    {
        return a*factorial(a-1);
    }
}
double p()
{
    double q=1895 - 1891;
    return q/10;
}
int main()
{
    int a[5][5]={
        {
            46,0,0,0,0
        },
        {
            66,0,0,0,0
        },
        {
            81,0,0,0,0
        },
        {
            93,0,0,0,0
        },
        {
            101,0,0,0,0
        }

    };
    int row,clum;

    for(row=0;row<5;row++)
    {
        for(clum=0;clum<5;clum++)
        {
            printf("%d  ",a[row][clum]);
        }
        printf("\n");
    }
    printf("\n\n\n");
    for(clum=1;clum<5;clum++)
    {
        for(row=1;row<=5-clum;row++)
        {
            a[row-1][clum]=a[row][clum-1] - a[row-1][clum-1];
        }
    }
    printf("\n\n\n");

    for(row=0;row<5;row++)
    {
        for(clum=0;clum<5;clum++)
        {
            printf("%d  ",a[row][clum]);
        }
        printf("\n");
    }


    //float p = 0.4;

    double y = a[0][0]+(p()*a[0][1])+(p()*(p()-1)*a[0][2])/factorial(2)+(p()*(p()-1)*(p()-2)*a[0][3])/factorial(3)+(p()*(p()-1)*(p()-2)*(p()-3)*a[0][4])/factorial(4);
    printf("\n\nResult = %lf\n\n",y);
    printf("\nP = %f ",p());

    return 0;
}
