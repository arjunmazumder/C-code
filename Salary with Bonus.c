#include<stdio.h>
int main()
{
    char name[10];
    gets(name);
    double FixSal,ToVuSold, TOTAL;
    scanf("%lf%lf",&FixSal,&ToVuSold);
    TOTAL = FixSal+(ToVuSold*15)/100;
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;
}
