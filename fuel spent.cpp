#include<stdio.h>
int main()
{
    int time,velocity,distance;
    double LitNeed;
    double FuelLiter=12;
    scanf("%d%d",&time,&velocity);
    distance=time*velocity;
    LitNeed=distance/FuelLiter;
    printf("%.3lf\n",LitNeed);
    return 0;
}
