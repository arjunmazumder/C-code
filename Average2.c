#include<stdio.h>
int main()
{
    double A,B,C;
    double Aw=2,Bw=3,Cw=5;
    scanf("%lf%lf%lf",&A,&B,&C);
    double MEDIA=(A*Aw+B*Bw+C*Cw)/(Aw+Bw+Cw);
    printf("MEDIA = %0.1lf\n",MEDIA);
    return 0;

}
