#include<stdio.h>
int main()
{
    double Y,Consumption;
    int X;
    scanf("%d%lf",&X,&Y);
    Consumption=X/Y;
    printf("%0.3lf km/l\n",Consumption);
    return 0;
}
