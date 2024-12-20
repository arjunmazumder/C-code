#include<stdio.h>
int main()
{
    int CodNum1,CodNum2, unit1,unit2;
    double pric1,pric2;
    scanf("%d%d%lf", &CodNum1, &unit1, &pric1);
    scanf("%d%d%lf", &CodNum2, &unit2, &pric2);
    double TotPric = unit1*pric1 + unit2*pric2;
    printf("VALOR A PAGAR: R$ %.2lf\n", TotPric);
    return 0;

}
