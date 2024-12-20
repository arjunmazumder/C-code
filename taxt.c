#include<stdio.h>
int main()
{
    float salary,tax=0;
    scanf("%f",&salary);
    if(salary>=0.00 && salary<=2000.00)
    {
        printf("Isento\n");
    }
    else
    {
        if(salary>=2000.01 && salary<=3000.00)
        {
            salary=salary-2000.00;
            tax=tax+(salary*8)/100;
            printf("R$ %0.2f\n",tax);
        }
        if(salary>=3000.01 && salary<=4500.00)
        {
            salary=salary-2000.00;
            if(salary>=0 && salary<=1000)
            {
                tax=tax+(salary*8)/100;
                printf("R$ %0.2f\n",tax);
            }
            else
            {
                tax=tax+(1000*8)/100;
                salary=salary-1000;
                tax=tax+(salary*18)/100;
                printf("R$ %0.2f\n",tax);
            }


        }
        if(salary>4500.00)
        {
            salary=salary-2000;
            if(salary>=0 && salary<=1000)
            {
                tax=tax+(1000*8)/100;
                 printf("R$ %0.2f\n",tax);
            }
            else if(salary>1000 && salary<=1500)
            {
                tax=tax+(1000*8)/100;
                salary=salary-1000;
                tax=tax+(salary*18)/100;
                 printf("R$ %0.2f\n",tax);
            }
            else
            {

                tax=tax+(1000*8)/100;
                tax=tax+(1500*18)/100;
                salary=salary-2500;
                tax=tax+(salary*28)/100;
                 printf("R$ %0.2f\n",tax);

            }
        }
    }
    return 0;
}
