#include<stdio.h>
int main()
{
    float salary, Mearned;
    int per;
    char p = '%';
    scanf("%f",&salary);
    if(salary>=0 && salary<=400.00)
    {
        Mearned = (salary*15)/100;
        per=15;

    }
    else if(salary>=400.01 && salary<=800.00)
    {
        Mearned = (salary*12)/100;
        per=12;

    }
    else if(salary>=800.01 && salary<=1200.00)
    {
        Mearned = (salary*10)/100;
        per=10;

    }
    else if(salary>=1200.01 && salary<=2000.00)
    {
        Mearned = (salary*7)/100;
        per=7;

    }
    else if(salary>2000.00)
    {
        Mearned = (salary*4)/100;
        per= 4;
    }
        printf("Novo salario: %0.2f\n", salary+Mearned);
        printf("Reajuste ganho: %0.2lf\n", Mearned);
        printf("Em percentual: %d %c\n", per, p);
    return 0;
}
