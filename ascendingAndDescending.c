#include<stdio.h>
int main()
{
    int i,num1,num2;
    while(1)
    {
        scanf("%d%d",&num1,&num2);
        if(num1==num2)
        {
            break;
        }
        else
        {
            if(num1<num2)
            {
                printf("Crescente\n");
            }
            else
            {
                printf("Decrescente\n");
            }

        }

    }
    return 0;
}
