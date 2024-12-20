#include<stdio.h>
int main()
{
    int time;
    scanf("%d",&time);
    float x,y;
    for(int i=0;i<time;i++)
    {
        scanf("%f%f",&x,&y);
        if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            printf("%.1f\n",x/y);
        }
    }
    return 0;
}
