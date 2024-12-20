#include<stdio.h>
int main()
{
    int NUMBER, HPM;
    double APH, SALARY;
    scanf("%d%d%lf",&NUMBER,&HPM,&APH);
    SALARY = APH*HPM;
    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %0.2lf\n",SALARY);

    return 0;
}
