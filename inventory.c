#include<stdio.h>
void append(struct invent_record *x,  *y)
struct invent_record
{
    char name[10];
    int number;
    float price;
    int quantity;
};
void main()
{
    char filename[10];
    int response;
    FILE *fp;
    int n;
    append(struct invent_record *x, file *y);
    printf("Type filename:");
    scanf("%s",filename);
    fp = fopen(filename,"a+");
    do
    {
        append(&item, fp);
        printf("\nItem %s appended.\n",item.name);
        printf("\nDo you want to add another item\( 1 for yes / 0 for no)?");
        scanf("%d",&response);
    }while(response == 1);
    n = ftell(fp);
    fclose(fp);
    fp = fopen(filename,"r");
    while(ftell(fp)<n)
    {
        fscanf(fp,"%s %d %f %d ",item.name,&item.number,&item,price,&item.quantity);
        fprintf(stdout,"%-8s %7d %8.2f %8d\n",item.name,item.number,item,price,item.quantity );

    }
    fclose(fp);

}
void append(struct invent_record *product, File *ptr)
{
    printf("Item name: ");
    scanf("%s",product_>name);
    printf("Item number: ");
    scanf("%d"&product_>number);
    printf("Item price: ");
    scanf("%f"&prpduct_>price);
    printf("Quantity: ");
    scanf("%d",&product_>quantity);
    fprintf("ptr,"'%s %d %.2f %d ",product_>name,product_number,product_>price,product_>quantity);
}
