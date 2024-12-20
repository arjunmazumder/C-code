#include<stdio.h>
int main()
{
    int x;
    x=20;
    change(&x);
    printf("%d\n",x);

    return 0;
}
 change(int *p)
{
   *p = *p+10;
}
