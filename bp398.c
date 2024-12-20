#include<stdio.h>
int main()
{
    char ItemName[20],FilName[20];
    int number,quantity;
    float price, value;
    FILE *fp;
    printf("Input file Name: ");
    scanf("%s",FilName);
    fp=fopen("FilName", "w");
    printf("\nInput invantory Data: \n");
    printf("\nItemName  Number  Price  Quantity.\n");
    for(int i=1;i<=3;i++)
    {
        fscanf(stdin, "%s %d %f %d", ItemName, &number, &price, &quantity);
        fprintf(fp, "%s %d %.2f %d", ItemName, number, price, quantity);
    }
    fclose(fp);
    fp=fopen("FilName", "r");
    printf("\nItem name  Number  Price  Quantity  Value\n");
    for(int i=1;i<=3;i++)
    {
        fscanf(fp, "%s %d %f %d", ItemName, &number, &price, &quantity);
        value=price*quantity;
        fprintf(stdout, "%s %d %.2f %d %.2f\n", ItemName,number,price,quantity,value);
    }
    fclose(fp);


    return 0;
}
