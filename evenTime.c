#include<stdio.h>
int main()
{
    int StrD,StrH,StrM,StrS,EndD,EndH,EndM,EndS,StrDS,EnDS;
    int day,hour,min,sec;
    scanf("%*s %d",&StrD);
    scanf("%d %*s %d %*s %d",&StrH,&StrM,&StrS);
    scanf("%*s %d",&EndD);
    scanf("%d %*s %d %*s %d",&EndH,&EndM,&EndS);
    StrDS=(StrD*24*60*60)+(StrH*60*60)+(StrM*60)+(StrS);
    EnDS=(EndD*24*60*60)+(EndH*60*60)+(EndM*60)+(EndS);
    int N= EnDS-StrDS;
    day=N/(24*60*60);
    N=N%(24*60*60);
    hour = N/(60*60);
    N=N%(60*60);
    min=N/60;
    sec=N%60;
    printf("%d dia(s)\n",day);
    printf("%d hora(s)\n",hour);
    printf("%d minuto(s)\n",min);
    printf("%d segundo(s)\n",sec);
return 0;
}
