#include<stdio.h>
int main()
{
    int X,count=0;
    scanf("%d",&X);
    //i=X+1;
    while(1)
    {

        if(X%2 != 0)
        {
            printf("%d\n",X);
            count++;
            if(count==6)
            break;


        }
        X++;

    }
    return 0;
}
