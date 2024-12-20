#include<stdio.h>
int main()
{
    int age,year,month,day;
    scanf("%d",&age);
    year=age/365;
    month=(age%365)/30;
    day=(age%365)%30;
    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",day);
    return 0;
}
