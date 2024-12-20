#include<stdio.h>
#include<math.h>
int main()
{
    int note[6]={100,50,20,10,5,2};
    int Snote[6];
    float coin[6]={1.00,0.50,0.25,0.10,0.05,0.01};
    int Scoin[6];
    float monetary;
    float remain;
    int quoit,i=0;
    scanf("%f",&monetary);
    while(i != 6)
    {
        quoit=monetary/note[i];
        Snote[i]=quoit;
        remain=monetary % note[i];
        monetary=remain;
        i++;
    }
    i=0;
    while(i != 6)
    {
        quoit=monetary/coin[i];
        Scoin[i]=quoit;
        remain=monetary % coin[i];
        monetary=remain;
        i++;

    }
    printf("NOTAS:\n");
    for(i=0;i<6;i++)
    {
        printf("%d nota(s) de R$ %.2f\n",Snote[i],note[i]);
    }
    printf("MOEDAS:\n");
    for(i=0;i<6;i++)
    {
        printf("%d moeda(s) de R$ %.2f\n",Scoin[i],coin[i]);
    }

    return 0;
}
