#include<stdio.h>
int main()
{
    int hour=0,min=0,secon=0,duration;
    scanf("%d",&duration);
    secon=duration%60;
    min=duration/60;
    if(min>=60)
    {
        hour=min/60;
        min=min%60;
    }
    printf("%d:%d:%d\n",hour,min,secon);
    return 0;
}
