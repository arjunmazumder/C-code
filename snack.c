#include<stdio.h>
int main()
{
    int x,y;
    float price[]={4.00,4.50,5.00,2.00,1.50};
    float total;
    scanf("%d%d",&x,&y);
    total= y*price[x-1];
    printf("Total: R$ %.2f\n",total);
    return 0;
}
