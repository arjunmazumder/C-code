#include<stdio.h>
int main()
{
    FILE *f1,*f2,*f3;
    int number,i;
    printf("Contents of DATA file: \n\n");
    f1=fopen("DATA","w");
    for(i=1;i<=10;i++)
    {
        scanf("%d",&number);
        putw(number,f1);
    }
    fclose(f1);
    f1=fopen("DATA", "r");
    printf("Contents of DAA file: ");
    while((number = getw(f1)) != EOF)
    {
        printf("%d ",number);
    }
    fclose(f1);
    f1= fopen("DATA", "r");
    f2 = fopen("EVEN", "w");
    f3 = fopen("ODD", "w");
    while((number = getw(f1)) != EOF)
    {
        if(number %2 == 0)
        {
            putw(number,f2);
        }
        else
        {
            putw(number,f3);
        }
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);

    f2=fopen("EVEN", "r");
    f3=fopen("ODD", "r");
    printf("\nContents of EVEN numbers: ");
    while((number = getw(f2)) != EOF)
    {
        printf("%d ",number);

    }
    printf("\n\nContents of ODD numbers: ");
    while((number = getw(f3)) != EOF)
    {

        printf("%d ",number);
    }
    fclose(f2);
    fclose(f3);


    return 0;
}
