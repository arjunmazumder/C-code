#include<stdio.h>
//#include<math.h>
int main()
{
    int note[6]={100,50,20,10,5,2};
    int Snote[6];
    float coin[6]={1.0,0.50,0.25,0.10,0.05,0.01};
    int Scoin[6];
    float monetary;
    int remain;
    int quoit,i=0;
    scanf("%f",&monetary);
    int N = monetary*100;

    while(i != 6)
    {
        quoit=N/(note[i]*100);
        Snote[i]=quoit;
        remain=N % (note[i]*100);
        N=remain;
        i++;
    }
    i=0;
    while(i != 6)
    {
        quoit=N/(coin[i]*100);
        Scoin[i]=quoit;
        int p=coin[i]*100;
        remain=(N % p);
        N=remain;
        i++;
    }
    printf("NOTAS:\n");
    for(i=0;i<6;i++)
    {
        printf("%d nota(s) de R$ %d.00\n",Snote[i],note[i]);
    }
    printf("MOEDAS:\n");
    for(i=0;i<6;i++)
    {
        printf("%d moeda(s) de R$ %0.2f\n",Scoin[i],coin[i]);
    }

    return 0;
}
