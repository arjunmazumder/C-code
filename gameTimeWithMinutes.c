#include<stdio.h>
int main()
{
    int StartH, StartM, EndH, EndM;
    scanf("%d%d%d%d",&StartH,&StartM,&EndH,&EndM);
    if(StartH==EndH && StartM==EndM)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if(EndM>StartM)
    {
        if(EndH>StartH)
        {
           printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",EndH-StartH, EndM-StartM);
        }
        else
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (EndH+12) - StartH, EndM - StartM);
        }
    }
    else if(EndM < StartM)
    {
        if(EndH > StartH)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", EndH-StartH-1, (EndM+60)-StartM);
        }
        else
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (EndH+12)-StartH-1, (EndM+60)-StartM);
        }
    }
    return 0;
}
