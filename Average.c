#include<stdio.h>
int main()
{
    double A,B,MEDIA;
    double x=3.5,y=7.5;
    scanf("%lf%lf",&A,&B);
    MEDIA=(x*A+y*B)/(x+y);
    printf("MEDIA = %0.5lf\n",MEDIA);
    return 0;
}
