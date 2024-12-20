#include<stdio.h>
int *larger(int *, int *);
int main()
{
    int a=20;
    int b=30;
    int *p;
    //p= larger(&a,&b);
    printf("Larger = %d",*larger(&a,&b));
    return 0;

}
int *larger(int *x, int *y)
{
    if(*x>*y)
    {
        return (x);
    }
    else
    {
        return (y);
    }
}
