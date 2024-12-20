/* write a function using pointer to exchage the values stored in two location in the memory*/
#include<stdio.h>
void ExchangeFunction(int *p, int *q);
int main()
{
    int x=400,y=500;
    printf("Before exchange : %d %d\n",x,y);
    ExchangeFunction(&x, &y);
    printf("After exchange : %d %d\n",x,y);


    return 0;
}
ExchangeFunction(int *a, int *b)
{
    int t=*a;
    *a=*b;
    *b=t;

}
