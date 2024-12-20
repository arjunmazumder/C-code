#include<stdio.h>
int main()
{
    float interval;
    scanf("%f",&interval);
    if(interval>=0 && interval<=25)
    {
      printf("Intervalo [0,25]\n");
    }
    else if(interval>25 && interval<=50)
    {
        printf("Intervalo (25,50]\n");
    }
    else if(interval>50 && interval<=75)
    {
        printf("Intervalo (50,75]\n");

    }
    else if(interval>75 && interval<=100)
    {
        printf("Intervalo (75,100]\n");

    }
    else
    {
        printf("Fora de intervalo\n");
    }
    return 0;
}
