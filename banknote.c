#include<stdio.h>
int main()
{
    int divis[]={100,50,20,10,5,2,1};
    int i=0,item,divid,quot,rema;
    scanf("%d",&item);
    printf("%d\n",item);
    while(i!=7){
        quot=item/divis[i];
        rema=item%divis[i];
        item=rema;
        printf("%d nota(s) de R$ %d,00\n",quot,divis[i]);
        i++;
    }
    return 0;
}
